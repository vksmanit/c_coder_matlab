/*
 * simple_vec_dot_product.c
 *
 * Code generation for function 'simple_vec_dot_product'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "simple_vec_dot_product.h"

/* Function Definitions */

/*
 * function out = simple_vec_dot_product(a,b)
 */
void simple_vec_dot_product(const int32_T a[4], const int32_T b[4], int32_T out
  [4])
{
  int32_T i0;
  int64_T i1;

  /* 'simple_vec_dot_product:3' out = a.*b; */
  for (i0 = 0; i0 < 4; i0++) {
    i1 = (int64_T)a[i0] * b[i0];
    if (i1 > 2147483647L) {
      i1 = 2147483647L;
    } else {
      if (i1 < -2147483648L) {
        i1 = -2147483648L;
      }
    }

    out[i0] = (int32_T)i1;
  }
}

/* End of code generation (simple_vec_dot_product.c) */
