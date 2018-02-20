/*
 * hdl_matmul_terminate.c
 *
 * Code generation for function 'hdl_matmul_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "hdl_matmul.h"
#include "hdl_matmul_terminate.h"

/* Function Definitions */
void hdl_matmul_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void hdl_matmul_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (hdl_matmul_terminate.c) */
