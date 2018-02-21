/*
 * _coder_dot_product_api.c
 *
 * Code generation for function '_coder_dot_product_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dot_product.h"
#include "_coder_dot_product_api.h"
#include "dot_product_mexutil.h"

/* Function Declarations */
static int32_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[4];
static int32_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];
static int32_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier))[4];

/* Function Definitions */
static int32_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[4]
{
  int32_T (*y)[4];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static int32_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4]
{
  int32_T (*ret)[4];
  int32_T iv0[2];
  int32_T i1;
  for (i1 = 0; i1 < 2; i1++) {
    iv0[i1] = 1 + 3 * i1;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 2U, iv0);
  ret = (int32_T (*)[4])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

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
  void dot_product_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  int32_T (*a)[4];
  int32_T (*b)[4];
  int32_T out;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  a = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "a");
  b = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "b");

  /* Invoke the target function */
  out = dot_product(&st, *a, *b);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(out);
}

/* End of code generation (_coder_dot_product_api.c) */
