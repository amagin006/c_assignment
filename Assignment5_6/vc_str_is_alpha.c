/**
* File              : vc_fibonacci.c
* Author            : Shota, Paulo
* Date              : Fri 8 Feb 2019
*/

#include <stdio.h>

int vc_str_is_alpha(char *str) {

  int i = 0; 
  while(str[i] != '\0'){
    if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) ) {
      i++;
    } else
    {
      return 0;
    }
  }
  return 1;
}
