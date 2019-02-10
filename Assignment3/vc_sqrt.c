/**
* File              : vc_sqrt.c
* Author            : Shota, Ozan
* Date              : Wed 7 Feb 2019
*/

#include <stdio.h>



int vc_sqrt(int n){
  int num = 0;
  int result = 0;

  while(result <= n){
    num++;
    result = num * num;
  }
  
  int sq_num = (num-1) * (num-1);
  if (sq_num == n) {
    return num - 1;
  } else {
    return 0;
  }
}
