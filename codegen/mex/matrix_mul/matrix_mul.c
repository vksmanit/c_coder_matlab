/*
 * matrix_mul.c
 *
 * Code generation for function 'matrix_mul'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "matrix_mul.h"

/* Function Definitions */
void matrix_mul(const real_T a[4], const real_T b[4], real_T out[4])
{
  int32_T i0;
  int32_T i1;
  int32_T i2;
  for (i0 = 0; i0 < 2; i0++) {
    for (i1 = 0; i1 < 2; i1++) {
      out[i0 + (i1 << 1)] = 0.0;
      for (i2 = 0; i2 < 2; i2++) {
        out[i0 + (i1 << 1)] += a[i0 + (i2 << 1)] * b[i2 + (i1 << 1)];
      }
    }
  }
}

/* End of code generation (matrix_mul.c) */
