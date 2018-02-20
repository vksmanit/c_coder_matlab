/*
 * File: hdl_matmul_initialize.c
 *
 * MATLAB Coder version            : 2.7
 * C/C++ source code generated on  : 20-Feb-2018 11:20:25
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "hdl_matmul.h"
#include "hdl_matmul_initialize.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void hdl_matmul_initialize(void)
{
  rt_InitInfAndNaN(8U);
  hdl_matmul_init();
}

/*
 * File trailer for hdl_matmul_initialize.c
 *
 * [EOF]
 */
