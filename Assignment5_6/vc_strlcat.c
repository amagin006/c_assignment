/**
* File              : vc_strlcat.c
* Author            : Shota, Paulo
* Date              : Fri 8 Feb 2019
*/

#include <stdio.h>

unsigned int vc_strlcat(char *dest, char *src, unsigned int size){
  size_t i, j;
  unsigned long count;
  for(i = 0; dest[i] != '\0'; i++)
    count++;
    printf("%zu\n", count);
  for(j = 0; j <= size - count; j++)
  {
    dest[i + j] = src[j];
    count++;
  }

  dest[i + j] = '\0';
  printf("%zu\n", count);
  return count;
}
