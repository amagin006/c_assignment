/**
* File              : vc_range.c
* Author            : Shota, Paulo, Ayana
* Date              : Fri 11 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>

int *vc_range(int min, int max) {
  int length = max - min;

  if (length <= 0) {
    return NULL;
  }
  
  int *num;
  num = (int *)malloc(length * sizeof(int));
  if(num == NULL){
    exit(EXIT_FAILURE);
  }

  int putNum = min;
  int i;
  for (i = 0; i < length; i++) {
    num[i] = putNum;
    putNum++;
  }
  
  return num;
}

int main() {

  int max = 10;
  int min = 5;

  int *putnum = vc_range(5, 10);
  for(int i = 0; i < max - min; i++)
  {
    printf("%d ", putnum[i]);
  }
  
  return 0;
}