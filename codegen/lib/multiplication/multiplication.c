/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: multiplication.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 13-Feb-2018 16:21:05
 */

/* Include Files */
#include "multiplication.h"

/* Function Definitions */

/*
 * Arguments    : int a
 *                int b
 * Return Type  : int
 */
int multiplication(int a, int b)
{
  long i0;
  i0 = (long)a * b;
  if (i0 > 2147483647L) {
    i0 = 2147483647L;
  } else {
    if (i0 < -2147483648L) {
      i0 = -2147483648L;
    }
  }

  return (int)i0;
}

/*
 * File trailer for multiplication.c
 *
 * [EOF]
 */
