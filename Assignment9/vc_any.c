/**
* File              : vc_any.c
* Author            : Shota, Ozan
* Date              : Fri 14 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>  


int isCapitalized(char *str) {
  return (str[0] >= 65 && str[0] <= 90) ? 1 : 0;
}

int vc_any(char **tab, int(*f)(char*)) {
  for(int i=0; tab[i] != 0; i++) {
    if (f(tab[i]) == 1) {
      return 1;
    }
  }
  return 0;
}

int main() {
  char *arr[3] = {"Aello", "world", 0};
  int (*fptr)(char*) = isCapitalized;
  // char *p1 = &arr;
  // char **p2 = &p1;
  // int (*fptr)(int) = &checkCh;
  int b = vc_any(arr, fptr);

  printf("%d\n", b);
}