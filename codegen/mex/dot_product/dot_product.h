/*
 * dot_product.h
 *
 * Code generation for function 'dot_product'
 *
 */

#ifndef __DOT_PRODUCT_H__
#define __DOT_PRODUCT_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "dot_product_types.h"

/* Function Declarations */
extern real_T dot_product(const emlrtStack *sp, const int32_T a[4], const
  int32_T b[4]);

#ifdef __WATCOMC__

#pragma aux dot_product value [8087];

#endif
#endif

/* End of code generation (dot_product.h) */
