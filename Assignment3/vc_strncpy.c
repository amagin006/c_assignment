/**
* File              : vc_strncpy.c
* Author            : Shota, Ozan
* Date              : Wed 7 Feb 2019
*/

#include <stdio.h>

 char *vc_strncpy(char *dest, char *src, unsigned int n) {

   int i;

   for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
   for ( ; i < n; i++)
        dest[i] = '\0';
   return dest;
  
}
