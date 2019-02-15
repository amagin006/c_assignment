/**
* File              : vc_count_if.c
* Author            : Shota, Ozan
* Date              : Fri 14 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>  


int isCapitalized(char *str) {
  return (str[0] >= 65 && str[0] <= 90) ? 1 : 0;
}

int vc_count_if(char **tab, int(*f)(char*)) {
  int count = 0;
  for(int i=0; tab[i] != 0; i++) {
    if (f(tab[i]) == 1) {
      count++;
    }
  }
  return count;
}

int main() {
  char *arr[] = {"Aello", "Jorld", "kkk", "HInjnf", "djijcj", 0};
  int (*fptr)(char*) = isCapitalized;
  int b = vc_count_if(arr, fptr);

  printf("%d\n", b);
}