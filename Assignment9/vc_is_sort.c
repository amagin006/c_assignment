/**
* File              : vc_is_sort.c
* Author            : Shota, Ozan
* Date              : Fri 14 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>  


int compare(int first, int second) {
  if (first <= second) {
    return -1;
  } else
  {
    return 0;
  }
  
  
}

int vc_is_sort(int *tab, int length, int(*f)(int, int)) {
  for(size_t i = 0; i < length - 1; i++)
  {
    if(f(tab[i], tab[i + 1]) == 0){
      return 0;
    } 
  }
  return 1;
}

int main() {
  int arrNum[] = {3, 5, 7, 8, 10, 15};
  int *arr = arrNum;
  int (*fptr)(int, int) = &compare;
  int b = vc_is_sort(arr, 6, fptr);

  printf("%d\n", b);
}