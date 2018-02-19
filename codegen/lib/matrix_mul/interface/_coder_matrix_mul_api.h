/* 
 * File: _coder_matrix_mul_api.h 
 *  
 * MATLAB Coder version            : 2.7 
 * C/C++ source code generated on  : 19-Feb-2018 18:24:53 
 */

#ifndef ___CODER_MATRIX_MUL_API_H__
#define ___CODER_MATRIX_MUL_API_H__
/* Include Files */ 
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Function Declarations */ 
extern void matrix_mul_initialize(emlrtContext *aContext);
extern void matrix_mul_terminate(void);
extern void matrix_mul_atexit(void);
extern void matrix_mul_api(const mxArray *prhs[2], const mxArray *plhs[1]);
extern void matrix_mul(real_T a[4], real_T b[4], real_T out[4]);
extern void matrix_mul_xil_terminate(void);

#endif
/* 
 * File trailer for _coder_matrix_mul_api.h 
 *  
 * [EOF] 
 */
