/*
 * dot_product.c
 *
 * Code generation for function 'dot_product'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dot_product.h"
#include "dot_product_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 2, 5, "dot_product",
  "/home/vipinsoni/MTP/c_coder_matlab/dot_product.m" };

/* Function Definitions */
int32_T dot_product(const emlrtStack *sp, const int32_T a[4], const int32_T b[4])
{
  int32_T out;
  int32_T x[4];
  int32_T k;
  int64_T i0;
  real_T y;
  for (k = 0; k < 4; k++) {
    i0 = (int64_T)a[k] * b[k];
    if (i0 > 2147483647L) {
      i0 = 2147483647L;
    } else {
      if (i0 < -2147483648L) {
        i0 = -2147483648L;
      }
    }

    x[k] = (int32_T)i0;
  }

  y = x[0];
  for (k = 0; k < 3; k++) {
    y += (real_T)x[k + 1];
  }

  y = muDoubleScalarRound(y);
  if (y < 2.147483648E+9) {
    if (y >= -2.147483648E+9) {
      out = (int32_T)y;
    } else {
      out = MIN_int32_T;
    }
  } else {
    out = MAX_int32_T;
  }

  emlrtDisplayR2012b(emlrt_marshallOut(out), "out", &emlrtRTEI, sp);
  return out;
}

/* End of code generation (dot_product.c) */
