/*
 * hdl_matmul.h
 *
 * Code generation for function 'hdl_matmul'
 *
 */

#ifndef __HDL_MATMUL_H__
#define __HDL_MATMUL_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "hdl_matmul_types.h"

/* Function Declarations */
extern void A_not_empty_init(void);
extern void B_not_empty_init(void);
extern void C_not_empty_init(void);
extern void hdl_matmul(const emlrtStack *sp, int8_T a_in, int8_T b_in, int8_T
  *c_out, int8_T *state_store);
extern void hdl_matmul_init(void);
extern void state_not_empty_init(void);
extern void x_in_not_empty_init(void);
extern void y_in_not_empty_init(void);

#endif

/* End of code generation (hdl_matmul.h) */
