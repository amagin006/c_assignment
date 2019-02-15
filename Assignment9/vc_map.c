/**
* File              : vc_map.c
* Author            : Shota, Ozan
* Date              : Fri 14 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>  


int timesten(int arrayNum) {
  return arrayNum * 100;
}

int *vc_map(int *tab, int length, int(*f)(int)){
  int *timesArr = (int *)malloc(length * sizeof(int));
  for(size_t i = 0; i < length; i++)
  {
    timesArr[i] = f(tab[i]);
  }
  return timesArr;
}

int main() {
  int arr[10] = {2, 3, 5, 5, 7, 1, 22, 24, 556, 66};
  int *p1 = arr;
  int (*fptr)(int) = &timesten;
  int *b;
  b = vc_map(p1, 10, fptr);
  for(size_t i = 0; i < 10; i++)
  {
    printf("%d ", b[i]);
  }
  
}