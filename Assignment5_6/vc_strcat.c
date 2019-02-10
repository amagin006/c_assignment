/**
* File              : vc_strcat.c
* Author            : Shota, Paulo
* Date              : Fri 8 Feb 2019
*/

#include <stdio.h>

char *vc_strcat(char *dest, char *src) {
  size_t i, j;
  for(i = 0; dest[i] != '\0'; i++);
  for(j = 0; src[j] != '\0'; j++)
    dest[i + j] = src[j];
    printf("%hhd\n", src[j]);
    dest[i + j] = '\0';
  
  return dest;
}
