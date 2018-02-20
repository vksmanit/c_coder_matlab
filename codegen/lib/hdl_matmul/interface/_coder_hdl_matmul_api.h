/* 
 * File: _coder_hdl_matmul_api.h 
 *  
 * MATLAB Coder version            : 2.7 
 * C/C++ source code generated on  : 20-Feb-2018 11:20:25 
 */

#ifndef ___CODER_HDL_MATMUL_API_H__
#define ___CODER_HDL_MATMUL_API_H__
/* Include Files */ 
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Function Declarations */ 
extern void hdl_matmul_initialize(emlrtContext *aContext);
extern void hdl_matmul_terminate(void);
extern void hdl_matmul_atexit(void);
extern void hdl_matmul_api(const mxArray * const prhs[2], const mxArray *plhs[2]);
extern void hdl_matmul(int8_T a_in, int8_T b_in, int8_T *c_out, int8_T *state_store);
extern void hdl_matmul_xil_terminate(void);

#endif
/* 
 * File trailer for _coder_hdl_matmul_api.h 
 *  
 * [EOF] 
 */
