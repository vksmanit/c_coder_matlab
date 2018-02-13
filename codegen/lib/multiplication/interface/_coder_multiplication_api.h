/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_multiplication_api.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 13-Feb-2018 16:21:05
 */

#ifndef ___CODER_MULTIPLICATION_API_H__
#define ___CODER_MULTIPLICATION_API_H__

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_multiplication_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern int32_T multiplication(int32_T a, int32_T b);
extern void multiplication_api(const mxArray * const prhs[2], const mxArray
  *plhs[1]);
extern void multiplication_atexit(void);
extern void multiplication_initialize(void);
extern void multiplication_terminate(void);
extern void multiplication_xil_terminate(void);

#endif

/*
 * File trailer for _coder_multiplication_api.h
 *
 * [EOF]
 */
