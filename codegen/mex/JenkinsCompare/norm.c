/*
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "norm.h"

/* Function Definitions */
real_T norm(const real_T x_data[], const int32_T x_size[2])
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  if (1 > x_size[1]) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)(1);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x_data[0]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

/* End of code generation (norm.c) */
