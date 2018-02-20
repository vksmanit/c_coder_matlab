/*
 * File: _coder_hdl_matmul_api.c
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 20-Feb-2018 11:20:25
 */

/* Include Files */
#include "_coder_hdl_matmul_api.h"

/* Function Declarations */
static int8_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *a_in, const
  char_T *identifier);
static int8_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *emlrt_marshallOut(const int8_T u);
static int8_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */

/*
 * Arguments    : emlrtContext *aContext
 * Return Type  : void
 */
void hdl_matmul_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void hdl_matmul_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void hdl_matmul_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  hdl_matmul_xil_terminate();
}

/*
 * Arguments    : const mxArray * const prhs[2]
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
void hdl_matmul_api(const mxArray * const prhs[2], const mxArray *plhs[2])
{
  int8_T a_in;
  int8_T b_in;
  int8_T state_store;
  int8_T c_out;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  a_in = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "a_in");
  b_in = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "b_in");

  /* Invoke the target function */
  hdl_matmul(a_in, b_in, &c_out, &state_store);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(c_out);
  plhs[1] = emlrt_marshallOut(state_store);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *a_in
 *                const char_T *identifier
 * Return Type  : int8_T
 */
static int8_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *a_in, const
  char_T *identifier)
{
  int8_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a_in), &thisId);
  emlrtDestroyArray(&a_in);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : int8_T
 */
static int8_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int8_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const int8_T u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const int8_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
  *(int8_T *)mxGetData(m0) = u;
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : int8_T
 */
static int8_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  int8_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int8", false, 0U, 0);
  ret = *(int8_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * File trailer for _coder_hdl_matmul_api.c
 *
 * [EOF]
 */
