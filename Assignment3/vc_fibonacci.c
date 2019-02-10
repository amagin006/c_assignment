/**
* File              : vc_fibonacci.c
* Author            : Shota, Ozan
* Date              : Wed 7 Feb 2019
*/

#include <stdio.h>

int vc_fibonacci(int n){
  int num1;
  if (n == 0 || n == 1)
  {
    return n;
  } else if (n > 1)
  {
    return (vc_fibonacci(n-1) + vc_fibonacci(n-2));
  }
  else
  {
    return -1;
  }
}
