/*
 * File: floor.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "floor.h"

/* Function Definitions */

/*
 * Arguments    : emxArray_real_T *x
 * Return Type  : void
 */
void b_floor(emxArray_real_T *x)
{
  int i10;
  int k;
  i10 = x->size[1];
  for (k = 0; k < i10; k++) {
    x->data[k] = floor(x->data[k]);
  }
}

/*
 * File trailer for floor.c
 *
 * [EOF]
 */
