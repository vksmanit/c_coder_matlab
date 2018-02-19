/*
 * _coder_simple_vec_dot_product_api.c
 *
 * Code generation for function '_coder_simple_vec_dot_product_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "simple_vec_dot_product.h"
#include "_coder_simple_vec_dot_product_api.h"

/* Function Declarations */
static int32_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[4];
static int32_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];
static int32_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier))[4];
static const mxArray *emlrt_marshallOut(const int32_T u[4]);

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
  int32_T iv2[2];
  int32_T i2;
  for (i2 = 0; i2 < 2; i2++) {
    iv2[i2] = 1 + 3 * i2;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 2U, iv2);
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
  static const mxArray *emlrt_marshallOut(const int32_T u[4])
{
  const mxArray *y;
  static const int32_T iv0[2] = { 0, 0 };

  const mxArray *m0;
  static const int32_T iv1[2] = { 1, 4 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxINT32_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

void simple_vec_dot_product_api(const mxArray * const prhs[2], const mxArray
  *plhs[1])
{
  int32_T (*out)[4];
  int32_T (*a)[4];
  int32_T (*b)[4];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  out = (int32_T (*)[4])mxMalloc(sizeof(int32_T [4]));

  /* Marshall function inputs */
  a = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "a");
  b = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "b");

  /* Invoke the target function */
  simple_vec_dot_product(*a, *b, *out);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*out);
}

/* End of code generation (_coder_simple_vec_dot_product_api.c) */
