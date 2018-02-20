/*
 * File: hdl_matmul.h
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 20-Feb-2018 11:20:25
 */

#ifndef __HDL_MATMUL_H__
#define __HDL_MATMUL_H__

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "hdl_matmul_types.h"

/* Function Declarations */
extern void hdl_matmul(signed char a_in, signed char b_in, signed char *c_out,
  signed char *state_store);
extern void hdl_matmul_init(void);

#endif

/*
 * File trailer for hdl_matmul.h
 *
 * [EOF]
 */
