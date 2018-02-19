/* 
 * File: _coder_simple_vec_dot_product_api.h 
 *  
 * MATLAB Coder version            : 2.7 
 * C/C++ source code generated on  : 15-Feb-2018 08:14:55 
 */

#ifndef ___CODER_SIMPLE_VEC_DOT_PRODUCT_API_H__
#define ___CODER_SIMPLE_VEC_DOT_PRODUCT_API_H__
/* Include Files */ 
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Function Declarations */ 
extern void simple_vec_dot_product_initialize(emlrtContext *aContext);
extern void simple_vec_dot_product_terminate(void);
extern void simple_vec_dot_product_atexit(void);
extern void simple_vec_dot_product_api(const mxArray *prhs[2], const mxArray *plhs[1]);
extern void simple_vec_dot_product(int32_T a[4], int32_T b[4], int32_T out[4]);
extern void simple_vec_dot_product_xil_terminate(void);

#endif
/* 
 * File trailer for _coder_simple_vec_dot_product_api.h 
 *  
 * [EOF] 
 */
