/*
 * hdl_matmul_initialize.c
 *
 * Code generation for function 'hdl_matmul_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "hdl_matmul.h"
#include "hdl_matmul_initialize.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar;

/* Function Declarations */
static void hdl_matmul_once(void);

/* Function Definitions */
static void hdl_matmul_once(void)
{
  x_in_not_empty_init();
  y_in_not_empty_init();
  C_not_empty_init();
  B_not_empty_init();
  A_not_empty_init();
  state_not_empty_init();
  hdl_matmul_init();
}

void hdl_matmul_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    hdl_matmul_once();
  }
}

/* End of code generation (hdl_matmul_initialize.c) */
