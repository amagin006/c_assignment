#include <stdio.h>

/**
* File              : vc_ultimate_pt.c
* Author            : Hao-Tse,Shota
* Date              : Wed 6 Feb 2019
*/


void vc_ultimate_pt(int *********n)
{
  int num = 77;
  int *a = &num;
  int **b = &a;
  int ***c = &b;
  int ****d = &c;
  int *****e = &d;
  int ******f = &e;
  int *******g = &f;
  int ********h = &g;
  n = &h;
  printf("%d\n", *********n);
}
