/**
* File              : vc_recursive_factorial.c
* Author            : Shota, Ozan
* Date              : Wed 7 Feb 2019
*/

#include <stdio.h>


long int multiplyNumbers(int n)
{
   if (n >= 1)
       return n * multiplyNumbers(n-1);
   else
       return 0;
}
