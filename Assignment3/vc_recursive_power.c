/**
* File              : vc_recursive_power.c
* Author            : Shota, Ozan
* Date              : Wed 7 Feb 2019
*/

#include <stdio.h>

int vc_recursive_power(int n, int power)
{
 if (power != 0) {
   return n * vc_recursive_power(n, (power - 1));
 } else {
   return 1;
 }
}
