/*
 * log.c
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "log.h"

/* Function Definitions */
void b_log(emxArray_creal_T *x)
{
  int32_T i18;
  int32_T k;
  real_T x_re;
  real_T x_im;
  i18 = x->size[0] * x->size[1];
  for (k = 0; k < i18; k++) {
    x_re = x->data[k].re;
    x_im = x->data[k].im;
    if ((x->data[k].im == 0.0) && muDoubleScalarIsNaN(x->data[k].re)) {
    } else if ((muDoubleScalarAbs(x->data[k].re) > 8.9884656743115785E+307) ||
               (muDoubleScalarAbs(x->data[k].im) > 8.9884656743115785E+307)) {
      x_re = muDoubleScalarLog(muDoubleScalarHypot(x->data[k].re / 2.0, x->
        data[k].im / 2.0)) + 0.69314718055994529;
      x_im = muDoubleScalarAtan2(x->data[k].im, x->data[k].re);
    } else {
      x_re = muDoubleScalarLog(muDoubleScalarHypot(x->data[k].re, x->data[k].im));
      x_im = muDoubleScalarAtan2(x->data[k].im, x->data[k].re);
    }

    x->data[k].re = x_re;
    x->data[k].im = x_im;
  }
}

/* End of code generation (log.c) */
