/*
 * hdl_matmul.c
 *
 * Code generation for function 'hdl_matmul'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "hdl_matmul.h"

/* Variable Definitions */
static real_T state;
static real_T A[4];
static real_T B[4];
static real_T C[4];
static real_T y_in;
static real_T x_in;
static emlrtDCInfo emlrtDCI = { 39, 11, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

static emlrtBCInfo emlrtBCI = { 1, 2, 39, 11, "A", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 39, 17, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

static emlrtBCInfo b_emlrtBCI = { 1, 2, 39, 17, "A", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 56, 28, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

static emlrtBCInfo c_emlrtBCI = { 1, 2, 56, 28, "A", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 40, 11, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

static emlrtBCInfo d_emlrtBCI = { 1, 2, 40, 11, "B", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 40, 17, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

static emlrtBCInfo e_emlrtBCI = { 1, 2, 40, 17, "B", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtDCInfo f_emlrtDCI = { 56, 45, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

static emlrtBCInfo f_emlrtBCI = { 1, 2, 56, 45, "B", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtDCInfo g_emlrtDCI = { 56, 11, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

static emlrtBCInfo g_emlrtBCI = { 1, 2, 56, 11, "C", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtDCInfo h_emlrtDCI = { 56, 16, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

static emlrtBCInfo h_emlrtBCI = { 1, 2, 56, 16, "C", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtBCInfo i_emlrtBCI = { 1, 2, 71, 24, "C", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtDCInfo i_emlrtDCI = { 71, 24, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

static emlrtBCInfo j_emlrtBCI = { 1, 2, 71, 29, "C", "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 0 };

static emlrtDCInfo j_emlrtDCI = { 71, 29, "hdl_matmul",
  "/home/vipinsoni/MTP/c_coder_matlab/hdl_matmul.m", 1 };

/* Function Definitions */
void A_not_empty_init(void)
{
}

void B_not_empty_init(void)
{
}

void C_not_empty_init(void)
{
}

void hdl_matmul(const emlrtStack *sp, int8_T a_in, int8_T b_in, int8_T *c_out,
                int8_T *state_store)
{
  int32_T k;
  int32_T i0;
  real_T y;

  /*  interchange y_in and x_in for correct columns and rows order */
  /*  state :  */
  /*  0 => input is being read, */
  /*  1 => multiplication started, */
  /*  2 => readout */
  *c_out = 0;
  if (0.0 == state) {
    k = (int32_T)emlrtIntegerCheckFastR2012b(x_in, &emlrtDCI, sp);
    i0 = (int32_T)emlrtIntegerCheckFastR2012b(y_in, &b_emlrtDCI, sp);
    A[(emlrtDynamicBoundsCheckFastR2012b(k, 1, 2, &emlrtBCI, sp) +
       ((emlrtDynamicBoundsCheckFastR2012b(i0, 1, 2, &b_emlrtBCI, sp) - 1) << 1))
      - 1] = a_in;
    k = (int32_T)emlrtIntegerCheckFastR2012b(x_in, &d_emlrtDCI, sp);
    i0 = (int32_T)emlrtIntegerCheckFastR2012b(y_in, &e_emlrtDCI, sp);
    B[(emlrtDynamicBoundsCheckFastR2012b(k, 1, 2, &d_emlrtBCI, sp) +
       ((emlrtDynamicBoundsCheckFastR2012b(i0, 1, 2, &e_emlrtBCI, sp) - 1) << 1))
      - 1] = b_in;
    if (2.0 == y_in) {
      y_in = 1.0;
      if (2.0 == x_in) {
        state = 1.0;
        x_in = 1.0;
      } else {
        x_in++;
      }
    } else {
      y_in++;
    }
  }

  if (1.0 == state) {
    /* C(x_in,y_in) =int8(double( A(x_in,:)) *double( B (:,y_in))); */
    k = (int32_T)emlrtIntegerCheckFastR2012b(x_in, &c_emlrtDCI, sp);
    emlrtDynamicBoundsCheckFastR2012b(k, 1, 2, &c_emlrtBCI, sp);
    k = (int32_T)emlrtIntegerCheckFastR2012b(y_in, &f_emlrtDCI, sp);
    emlrtDynamicBoundsCheckFastR2012b(k, 1, 2, &f_emlrtBCI, sp);
    y = 0.0;
    for (k = 0; k < 2; k++) {
      y += A[((int32_T)x_in + (k << 1)) - 1] * B[k + (((int32_T)y_in - 1) << 1)];
    }

    k = (int32_T)emlrtIntegerCheckFastR2012b(x_in, &g_emlrtDCI, sp);
    i0 = (int32_T)emlrtIntegerCheckFastR2012b(y_in, &h_emlrtDCI, sp);
    C[(emlrtDynamicBoundsCheckFastR2012b(k, 1, 2, &g_emlrtBCI, sp) +
       ((emlrtDynamicBoundsCheckFastR2012b(i0, 1, 2, &h_emlrtBCI, sp) - 1) << 1))
      - 1] = y;
    if (2.0 == y_in) {
      y_in = 1.0;
      if (2.0 == x_in) {
        state = 2.0;
        x_in = 1.0;
      } else {
        x_in++;
      }
    } else {
      y_in++;
    }
  }

  if (2.0 == state) {
    k = (int32_T)emlrtIntegerCheckFastR2012b(x_in, &i_emlrtDCI, sp);
    i0 = (int32_T)emlrtIntegerCheckFastR2012b(y_in, &j_emlrtDCI, sp);
    y = muDoubleScalarRound(C[(emlrtDynamicBoundsCheckFastR2012b(k, 1, 2,
      &i_emlrtBCI, sp) + ((emlrtDynamicBoundsCheckFastR2012b(i0, 1, 2,
      &j_emlrtBCI, sp) - 1) << 1)) - 1]);
    if (y < 128.0) {
      if (y >= -128.0) {
        *c_out = (int8_T)y;
      } else {
        *c_out = MIN_int8_T;
      }
    } else if (y >= 128.0) {
      *c_out = MAX_int8_T;
    } else {
      *c_out = 0;
    }

    if (2.0 == y_in) {
      y_in = 1.0;
      if (2.0 == x_in) {
        state = 0.0;
        x_in = 1.0;
      } else {
        x_in++;
      }
    } else {
      y_in++;
    }
  }

  y = muDoubleScalarRound(state);
  if (y < 128.0) {
    if (y >= -128.0) {
      *state_store = (int8_T)y;
    } else {
      *state_store = MIN_int8_T;
    }
  } else if (y >= 128.0) {
    *state_store = MAX_int8_T;
  } else {
    *state_store = 0;
  }
}

void hdl_matmul_init(void)
{
  int32_T i1;
  state = 0.0;
  for (i1 = 0; i1 < 4; i1++) {
    A[i1] = 0.0;
    B[i1] = 0.0;
    C[i1] = 0.0;
  }

  y_in = 1.0;
  x_in = 1.0;
}

void state_not_empty_init(void)
{
}

void x_in_not_empty_init(void)
{
}

void y_in_not_empty_init(void)
{
}

/* End of code generation (hdl_matmul.c) */
