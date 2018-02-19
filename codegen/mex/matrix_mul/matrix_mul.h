/*
 * matrix_mul.h
 *
 * Code generation for function 'matrix_mul'
 *
 */

#ifndef __MATRIX_MUL_H__
#define __MATRIX_MUL_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "matrix_mul_types.h"

/* Function Declarations */
extern void matrix_mul(const real_T a[4], const real_T b[4], real_T out[4]);

#endif

/* End of code generation (matrix_mul.h) */
