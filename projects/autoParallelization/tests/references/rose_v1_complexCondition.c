// Contributed by Jeff Keasler
// 5/24/2010
#include <omp.h> 

void goo(int numAB)
{
  double *c;
  double *bufLoc;
  int k_nom_22;
#if 0   
#else     
  
#pragma omp parallel for private (k_nom_22) firstprivate (numAB)
  for (k_nom_22 = 0; k_nom_22 <= numAB * numAB * 3 - 1; k_nom_22 += 1) {
#endif     
    bufLoc[k_nom_22] = c[k_nom_22];
  }
  return ;
}
