#ifndef DFASTATTRIBUTE_H
#define DFASTATTRIBUTE_H

#include <string>
using std::string;

class DFAstAttribute : public AstAttribute {
 public:
  // preInfoToString();
  string virtual getPreInfoString();
  string virtual getPostInfoString();
  ~DFAstAttribute();
};

#endif
