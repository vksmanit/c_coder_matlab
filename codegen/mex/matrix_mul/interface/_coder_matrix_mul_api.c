/*
 * _coder_matrix_mul_api.c
 *
 * Code generation for function '_coder_matrix_mul_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "matrix_mul.h"
#include "_coder_matrix_mul_api.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier))[4];
static const mxArray *emlrt_marshallOut(const real_T u[4]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4]
{
  real_T (*y)[4];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4]
{
  real_T (*ret)[4];
  int32_T iv2[2];
  int32_T i;
  for (i = 0; i < 2; i++) {
    iv2[i] = 2;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv2);
  ret = (real_T (*)[4])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *a, const
  char_T *identifier))[4]
{
  real_T (*y)[4];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a), &thisId);
  emlrtDestroyArray(&a);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[4])
{
  const mxArray *y;
  static const int32_T iv0[2] = { 0, 0 };

  const mxArray *m0;
  static const int32_T iv1[2] = { 2, 2 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

void matrix_mul_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  real_T (*out)[4];
  real_T (*a)[4];
  real_T (*b)[4];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  out = (real_T (*)[4])mxMalloc(sizeof(real_T [4]));

  /* Marshall function inputs */
  a = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "a");
  b = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "b");

  /* Invoke the target function */
  matrix_mul(*a, *b, *out);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*out);
}

/* End of code generation (_coder_matrix_mul_api.c) */
