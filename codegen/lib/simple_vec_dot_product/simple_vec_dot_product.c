/*
 * File: simple_vec_dot_product.c
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 15-Feb-2018 08:14:55
 */

/* Include Files */
#include "simple_vec_dot_product.h"

/* Function Definitions */

/*
 * Arguments    : const int a[4]
 *                const int b[4]
 *                int out[4]
 * Return Type  : void
 */
void simple_vec_dot_product(const int a[4], const int b[4], int out[4])
{
  int i0;
  long i1;
  for (i0 = 0; i0 < 4; i0++) {
    i1 = (long)a[i0] * b[i0];
    if (i1 > 2147483647L) {
      i1 = 2147483647L;
    } else {
      if (i1 < -2147483648L) {
        i1 = -2147483648L;
      }
    }

    out[i0] = (int)i1;
  }
}

/*
 * File trailer for simple_vec_dot_product.c
 *
 * [EOF]
 */
