/**
* File              : vc_iterative_factorial.c
* Author            : Shota, Ozan
* Date              : Wed 7 Feb 2019
*/

#include <stdio.h>

int iterative_power(int n, int power)
{
  int pow = n;
  if (power > 0) {
    for(int i = 1; i < power; i++)
    {
      pow = pow * n;
    }
    return pow;
  } else
  {
    return 0;
  }
}
