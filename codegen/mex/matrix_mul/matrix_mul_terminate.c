/*
 * matrix_mul_terminate.c
 *
 * Code generation for function 'matrix_mul_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "matrix_mul.h"
#include "matrix_mul_terminate.h"

/* Function Definitions */
void matrix_mul_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void matrix_mul_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (matrix_mul_terminate.c) */
