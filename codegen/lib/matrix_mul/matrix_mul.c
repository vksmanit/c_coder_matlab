/*
 * File: matrix_mul.c
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 19-Feb-2018 18:24:53
 */

/* Include Files */
#include "matrix_mul.h"

/* Function Definitions */

/*
 * Arguments    : const double a[4]
 *                const double b[4]
 *                double out[4]
 * Return Type  : void
 */
void matrix_mul(const double a[4], const double b[4], double out[4])
{
  int i0;
  int i1;
  int i2;
  for (i0 = 0; i0 < 2; i0++) {
    for (i1 = 0; i1 < 2; i1++) {
      out[i0 + (i1 << 1)] = 0.0;
      for (i2 = 0; i2 < 2; i2++) {
        out[i0 + (i1 << 1)] += a[i0 + (i2 << 1)] * b[i2 + (i1 << 1)];
      }
    }
  }
}

/*
 * File trailer for matrix_mul.c
 *
 * [EOF]
 */
