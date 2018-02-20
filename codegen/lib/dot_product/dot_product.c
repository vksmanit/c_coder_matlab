/*
 * File: dot_product.c
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 20-Feb-2018 14:16:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "dot_product.h"

/* Function Definitions */

/*
 * Arguments    : const int a[4]
 *                const int b[4]
 * Return Type  : double
 */
double dot_product(const int a[4], const int b[4])
{
  double out;
  int x[4];
  int k;
  long i0;
  for (k = 0; k < 4; k++) {
    i0 = (long)a[k] * b[k];
    if (i0 > 2147483647L) {
      i0 = 2147483647L;
    } else {
      if (i0 < -2147483648L) {
        i0 = -2147483648L;
      }
    }

    x[k] = (int)i0;
  }

  out = x[0];
  for (k = 0; k < 3; k++) {
    out += (double)x[k + 1];
  }

  return out;
}

/*
 * File trailer for dot_product.c
 *
 * [EOF]
 */
