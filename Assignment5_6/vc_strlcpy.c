/**
* File              : vc_strlcpy.c
* Author            : Shota, Paulo
* Date              : Fri 8 Feb 2019
*/

#include <stdio.h>

unsigned int vc_strlcpy(char *dest, char *src, unsigned int size)
{
    char *de = dest;
    char *sr = src;
    size_t siz = size;

    if (siz != 0) {
        while (--siz != 0) {
            if ((*de++ = *sr++) == '\0')
                break;
        }
    }
    if (siz == 0) {
        if (size != 0)
            *de = '\0'; 
        while (*sr++)
            ;
    }
    return(sr - src - 1);
}
