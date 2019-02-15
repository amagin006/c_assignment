/**
* File              : vc_foreach.c
* Author            : Shota, Ozan
* Date              : Fri 14 Feb 2019
*/
#include <stdio.h>

void displayNum(int arrayNum) {
  printf("%d ", arrayNum);
}

void vc_foreach(int *tab, int length, void(*f)(int)){
  for(size_t i = 0; i < length; i++)
  {
    f(tab[i]);
  }
}

int main() {
  int arr[10] = {2, 3, 5, 5, 7, 1, 22, 24, 556, 66};
  int *p1 = arr;
  void (*fun)(int) = &displayNum;
  vc_foreach(p1, 10, fun);
}