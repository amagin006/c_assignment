/**
* File              : vc_find_next_prime.c
* Author            : Shota, Ozan
* Date              : Wed 7 Feb 2019
*/

#include <stdio.h>

int vc_find_next_prime(int n) {
  int num1 = n;
  int w_flag = 1;

  while(w_flag == 1)
  {
    w_flag = 0;

    if (num1 == 0 || num1 == 1 || num1 == 2) {
      num1++;
      w_flag = 1;
    } else {
      for(int i = 2; i < num1/2; i++)
      {
        if (num1 % i == 0) 
        {
          w_flag = 1;
          break;
        }
      }
      if (w_flag == 1) {
        num1++;
      }
    }
  }
  return num1;
}

