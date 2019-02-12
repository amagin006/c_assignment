/**
* File              : vc_ultimate_range.c
* Author            : Shota, Paulo, Ayana
* Date              : Fri 11 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>

int vc_ultimate_range(int** range, int min, int max) {
  int *arr;
  int length = max - min;

  if ((length <= 0) || !(arr = (int *)malloc(length * sizeof(int)))) {
    *range = NULL;
    return 0;
  }
  for(int i = min; i < max; i++) {
    (*range)[i - min] = i;
  }

  return length;
}

