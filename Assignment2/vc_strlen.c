/**
* File              : vc_strlen.c
* Author            : Hao-Tse,Shota
* Date              : Wed 6 Feb 2019
*/
#include <stdio.h>

int vc_strlen(char *str)
{

    int length;
    
    while(*str)
    {
        length ++;
        *str ++;
    }

    return length;
}
