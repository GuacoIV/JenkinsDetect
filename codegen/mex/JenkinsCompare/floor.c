/*
 * floor.c
 *
 * Code generation for function 'floor'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "floor.h"

/* Function Definitions */
void b_floor(emxArray_real_T *x)
{
  int32_T i17;
  int32_T k;
  i17 = x->size[1];
  for (k = 0; k < i17; k++) {
    x->data[k] = muDoubleScalarFloor(x->data[k]);
  }
}

/* End of code generation (floor.c) */
