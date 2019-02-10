/**
* File              : vc_div_mod.c
* Author            : Hao-Tse,Shota
* Date              : Wed 6 Feb 2019
*/
#include <stdio.h>

void vc_div_mod(int a, int b, int *div, int *mod)
{
	int tem = a / b;
    int rem = a % b;

    *div = tem;
    *mod = rem;
}

int main()
{
    int div;
    int mod;

    int num1 = 10;
    int num2 = 3;

    vc_div_mod(num1, num2, &div, &mod);
    printf("%d\n %d\n", div, mod);

    return 0;
}