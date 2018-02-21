/*
 * File: _coder_dot_product_api.c
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 21-Feb-2018 09:41:54
 */

/* Include Files */
#include "_coder_dot_product_api.h"

/* Function Declarations */
static int32_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier))[4];
static int32_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[4];
static const mxArray *emlrt_marshallOut(const int32_T u);
static int32_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];

/* Function Definitions */

/*
 * Arguments    : emlrtContext *aContext
 * Return Type  : void
 */
void dot_product_initialize(emlrtContext *aContext)
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
void dot_product_terminate(void)
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
void dot_product_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  dot_product_xil_terminate();
}

/*
 * Arguments    : const mxArray *prhs[2]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void dot_product_api(const mxArray *prhs[2], const mxArray *plhs[1])
{
  int32_T (*a)[4];
  int32_T (*b)[4];
  int32_T out;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs[1] = emlrtProtectR2012b(prhs[1], 1, false, -1);

  /* Marshall function inputs */
  a = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "a");
  b = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "b");

  /* Invoke the target function */
  out = dot_product(*a, *b);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(out);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *a
 *                const char_T *identifier
 * Return Type  : int32_T (*)[4]
 */
static int32_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier))[4]
{
  int32_T (*y)[4];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a), &thisId);
  emlrtDestroyArray(&a);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : int32_T (*)[4]
 */
  static int32_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[4]
{
  int32_T (*y)[4];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const int32_T u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const int32_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m0) = u;
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : int32_T (*)[4]
 */
static int32_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4]
{
  int32_T (*ret)[4];
  int32_T iv0[2];
  int32_T i0;
  for (i0 = 0; i0 < 2; i0++) {
    iv0[i0] = 1 + 3 * i0;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 2U, iv0);
  ret = (int32_T (*)[4])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * File trailer for _coder_dot_product_api.c
 *
 * [EOF]
 */
