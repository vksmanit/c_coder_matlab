/*
 * File: hdl_matmul.c
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 20-Feb-2018 11:20:25
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "hdl_matmul.h"

/* Variable Definitions */
static double state;
static double A[4];
static double B[4];
static double C[4];
static double y_in;
static double x_in;

/* Function Declarations */
static double rt_roundd_snf(double u);

/* Function Definitions */

/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * Arguments    : signed char a_in
 *                signed char b_in
 *                signed char *c_out
 *                signed char *state_store
 * Return Type  : void
 */
void hdl_matmul(signed char a_in, signed char b_in, signed char *c_out, signed
                char *state_store)
{
  double d0;
  int i0;

  /*  interchange y_in and x_in for correct columns and rows order */
  /*  state :  */
  /*  0 => input is being read, */
  /*  1 => multiplication started, */
  /*  2 => readout */
  *c_out = 0;
  if (0.0 == state) {
    A[((int)x_in + (((int)y_in - 1) << 1)) - 1] = a_in;
    B[((int)x_in + (((int)y_in - 1) << 1)) - 1] = b_in;
    if (2.0 == y_in) {
      y_in = 1.0;
      if (2.0 == x_in) {
        state = 1.0;
        x_in = 1.0;
      } else {
        x_in++;
      }
    } else {
      y_in++;
    }
  }

  if (1.0 == state) {
    /* C(x_in,y_in) =int8(double( A(x_in,:)) *double( B (:,y_in))); */
    d0 = 0.0;
    for (i0 = 0; i0 < 2; i0++) {
      d0 += A[((int)x_in + (i0 << 1)) - 1] * B[i0 + (((int)y_in - 1) << 1)];
    }

    C[((int)x_in + (((int)y_in - 1) << 1)) - 1] = d0;
    if (2.0 == y_in) {
      y_in = 1.0;
      if (2.0 == x_in) {
        state = 2.0;
        x_in = 1.0;
      } else {
        x_in++;
      }
    } else {
      y_in++;
    }
  }

  if (2.0 == state) {
    d0 = rt_roundd_snf(C[((int)x_in + (((int)y_in - 1) << 1)) - 1]);
    if (d0 < 128.0) {
      if (d0 >= -128.0) {
        *c_out = (signed char)d0;
      } else {
        *c_out = MIN_int8_T;
      }
    } else if (d0 >= 128.0) {
      *c_out = MAX_int8_T;
    } else {
      *c_out = 0;
    }

    if (2.0 == y_in) {
      y_in = 1.0;
      if (2.0 == x_in) {
        state = 0.0;
        x_in = 1.0;
      } else {
        x_in++;
      }
    } else {
      y_in++;
    }
  }

  d0 = rt_roundd_snf(state);
  if (d0 < 128.0) {
    if (d0 >= -128.0) {
      *state_store = (signed char)d0;
    } else {
      *state_store = MIN_int8_T;
    }
  } else if (d0 >= 128.0) {
    *state_store = MAX_int8_T;
  } else {
    *state_store = 0;
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void hdl_matmul_init(void)
{
  int i1;
  state = 0.0;
  for (i1 = 0; i1 < 4; i1++) {
    A[i1] = 0.0;
    B[i1] = 0.0;
    C[i1] = 0.0;
  }

  y_in = 1.0;
  x_in = 1.0;
}

/*
 * File trailer for hdl_matmul.c
 *
 * [EOF]
 */
