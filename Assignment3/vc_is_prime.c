/**
* File              : vc_is_prime.c
* Author            : Shota, Ozan
* Date              : Wed 7 Feb 2019
*/

#include <stdio.h>

int vc_is_prime(int n){

  int flag = 0;

  for(int i = 2; i < n/2; i++)
  {
    if (n%i == 0) {
      flag = 1;
      break;
    }
  }
  
  if (n == 0 || n == 1 || flag == 1) {
    return 0;
  } else {
    return 1;
  }
}
