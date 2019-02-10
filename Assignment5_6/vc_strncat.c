/**
* File              : vc_strncat.c
* Author            : Shota, Paulo
* Date              : Fri 8 Feb 2019
*/

#include <stdio.h>

char *vc_strncat(char *dest, char *src, int n){
  size_t i, j;
  for(i = 0; dest[i] != '\0'; i++);
  for(j = 0; j <= n; j++)
    dest[i + j] = src[j];
    dest[i + j] = '\0';
  
  return dest;
}
