/*
 * simple_vec_dot_product_terminate.c
 *
 * Code generation for function 'simple_vec_dot_product_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "simple_vec_dot_product.h"
#include "simple_vec_dot_product_terminate.h"

/* Function Definitions */
void simple_vec_dot_product_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void simple_vec_dot_product_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (simple_vec_dot_product_terminate.c) */
