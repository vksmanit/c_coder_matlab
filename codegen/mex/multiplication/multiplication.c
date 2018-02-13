/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multiplication.c
 *
 * Code generation for function 'multiplication'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "multiplication.h"

/* Function Definitions */
int32_T multiplication(int32_T a, int32_T b)
{
  int64_T i0;
  i0 = (int64_T)a * b;
  if (i0 > 2147483647L) {
    i0 = 2147483647L;
  } else {
    if (i0 < -2147483648L) {
      i0 = -2147483648L;
    }
  }

  return (int32_T)i0;
}

/* End of code generation (multiplication.c) */
