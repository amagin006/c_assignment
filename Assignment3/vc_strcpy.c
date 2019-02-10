/**
* File              : vc_strcpy.c
* Author            : Shota, Ozan
* Date              : Wed 7 Feb 2019
*/

#include <stdio.h>

char *vc_strcpy(char *dest, char *src) {

  for(int i = 0;i < sizeof(src); i++)
  {
    dest[i] = src[i];
  }

  return dest;
}

