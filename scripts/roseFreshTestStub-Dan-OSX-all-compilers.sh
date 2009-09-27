#!/bin/bash -x

set -e

if test $# -ne 1; then
  echo "Usage: $0 run_build" >&2
  exit 1
fi

run_build=$1

# BUILD BINARIES (first step is to update the readonly repository)
if test $run_build = "build"; then
  cd /Users/dquinlan/ROSE/svn-rose/scripts && ./update_svn-readonly-rose_repository-OSX-Dan.sh
# sleep 15m
fi

# BUILD BINARIES (for all versions of compilers)
# DQ (9/15/2009): Test different versions of compilers.
cd /Users/dquinlan/ROSE/svn-rose/scripts && ./roseFreshTest ./roseFreshTestStub-Dan-OSX-defaultCompiler.sh --without-java

# set -o pipefail
