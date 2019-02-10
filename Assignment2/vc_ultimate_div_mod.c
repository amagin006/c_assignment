/**
* File              : vc_ultimate_div_mod.c
* Author            : Hao-Tse,Shota
* Date              : Wed 6 Feb 2019
*/
#include <stdio.h>

void vc_ultimate_div_mod(int *a, int *b)
{
	int temp = *a / *b;
    int reme = *a % *b;

    *a = temp;
    *b = reme;

}

