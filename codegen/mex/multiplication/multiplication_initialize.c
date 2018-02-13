/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multiplication_initialize.c
 *
 * Code generation for function 'multiplication_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "multiplication.h"
#include "multiplication_initialize.h"
#include "_coder_multiplication_mex.h"
#include "multiplication_data.h"

/* Function Definitions */
void multiplication_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (multiplication_initialize.c) */
