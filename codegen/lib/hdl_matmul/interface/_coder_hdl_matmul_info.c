/*
 * File: _coder_hdl_matmul_info.c
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 20-Feb-2018 11:20:25
 */

/* Include Files */
#include "_coder_hdl_matmul_info.h"

/* Function Declarations */
static void info_helper(const mxArray **info);
static const mxArray *emlrt_marshallOut(const char * u);
static const mxArray *b_emlrt_marshallOut(const uint32_T u);

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  nameCaptureInfo = NULL;
  emlrtAssign(&nameCaptureInfo, emlrtCreateStructMatrix(6, 1, 0, NULL));
  info_helper(&nameCaptureInfo);
  emlrtNameCapturePostProcessR2013b(&nameCaptureInfo);
  return nameCaptureInfo;
}

/*
 * Arguments    : const mxArray **info
 * Return Type  : void
 */
static void info_helper(const mxArray **info)
{
  const mxArray *rhs0 = NULL;
  const mxArray *lhs0 = NULL;
  const mxArray *rhs1 = NULL;
  const mxArray *lhs1 = NULL;
  const mxArray *rhs2 = NULL;
  const mxArray *lhs2 = NULL;
  const mxArray *rhs3 = NULL;
  const mxArray *lhs3 = NULL;
  const mxArray *rhs4 = NULL;
  const mxArray *lhs4 = NULL;
  const mxArray *rhs5 = NULL;
  const mxArray *lhs5 = NULL;
  emlrtAddField(*info, emlrt_marshallOut(
    "[E]/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m"), "context", 0);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 0);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(1383861094U), "fileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 0);
  emlrtAssign(&rhs0, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs0, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs0), "rhs", 0);
  emlrtAddField(*info, emlrtAliasP(lhs0), "lhs", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                "context", 1);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 1);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(1395915656U), "fileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 1);
  emlrtAssign(&rhs1, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs1, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs1), "rhs", 1);
  emlrtAddField(*info, emlrtAliasP(lhs1), "lhs", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 2);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 2);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(1323154378U), "fileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 2);
  emlrtAssign(&rhs2, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs2, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs2), "rhs", 2);
  emlrtAddField(*info, emlrtAliasP(lhs2), "lhs", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 3);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 3);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                3);
  emlrtAddField(*info, b_emlrt_marshallOut(1375968088U), "fileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 3);
  emlrtAssign(&rhs3, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs3, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs3), "rhs", 3);
  emlrtAddField(*info, emlrtAliasP(lhs3), "lhs", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                4);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 4);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(1410795170U), "fileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 4);
  emlrtAssign(&rhs4, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs4, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs4), "rhs", 4);
  emlrtAddField(*info, emlrtAliasP(lhs4), "lhs", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 5);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 5);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 5);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/use_refblas.p"),
                "resolved", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(1410795170U), "fileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 5);
  emlrtAssign(&rhs5, emlrtCreateCellMatrix(0, 1));
  emlrtAssign(&lhs5, emlrtCreateCellMatrix(0, 1));
  emlrtAddField(*info, emlrtAliasP(rhs5), "rhs", 5);
  emlrtAddField(*info, emlrtAliasP(lhs5), "lhs", 5);
  emlrtDestroyArray(&rhs0);
  emlrtDestroyArray(&lhs0);
  emlrtDestroyArray(&rhs1);
  emlrtDestroyArray(&lhs1);
  emlrtDestroyArray(&rhs2);
  emlrtDestroyArray(&lhs2);
  emlrtDestroyArray(&rhs3);
  emlrtDestroyArray(&lhs3);
  emlrtDestroyArray(&rhs4);
  emlrtDestroyArray(&lhs4);
  emlrtDestroyArray(&rhs5);
  emlrtDestroyArray(&lhs5);
}

/*
 * Arguments    : const char * u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const char * u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateString(u);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const uint32_T u
 * Return Type  : const mxArray *
 */
static const mxArray *b_emlrt_marshallOut(const uint32_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m1) = u;
  emlrtAssign(&y, m1);
  return y;
}

MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);
mxArray *emlrtMexFcnProperties()
{
  const char *mexProperties[] = {
    "Version",
    "ResolvedFunctions",
    "EntryPoints",
    "CoverageInfo",
    NULL };

  const char *epProperties[] = {
    "Name",
    "NumberOfInputs",
    "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xResult = mxCreateStructMatrix(1,1,4,mexProperties);
  mxArray *xEntryPoints = mxCreateStructMatrix(1,1,4,epProperties);
  mxArray *xInputs = NULL;
  xInputs = mxCreateLogicalMatrix(1, 2);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("hdl_matmul"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(2));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(2));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.4.0.150421 (R2014b)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_hdl_matmul_info.c
 *
 * [EOF]
 */
