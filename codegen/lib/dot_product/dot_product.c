/*
 * File: dot_product.c
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 21-Feb-2018 09:41:54
 */

/* Include Files */
#include "dot_product.h"

/* Function Declarations */
static double rt_roundd(double u);

/* Function Definitions */

/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * Arguments    : const int a[4]
 *                const int b[4]
 * Return Type  : int
 */
int dot_product(const int a[4], const int b[4])
{
  int out;
  int x[4];
  int k;
  long i0;
  double y;
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

  y = x[0];
  for (k = 0; k < 3; k++) {
    y += (double)x[k + 1];
  }

  y = rt_roundd(y);
  if (y < 2.147483648E+9) {
    if (y >= -2.147483648E+9) {
      out = (int)y;
    } else {
      out = MIN_int32_T;
    }
  } else {
    out = MAX_int32_T;
  }

  return out;
}

/*
 * File trailer for dot_product.c
 *
 * [EOF]
 */
