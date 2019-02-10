/**
* File              : vc_putstr_non_printable.c
* Author            : Shota, Paulo
* Date              : Fri 8 Feb 2019
*/

#include <stdio.h>

void vc_putstr_non_printable(char *str)
{
  int i = 0;
  int j = 0;
  int k = 0;
  char hex[16] = "0123456789abcdef";
  char temp[1024];

  while(str[i]) {
    if (str[i] >= 1 && str[i] <= 31) {
      while(str[i] > 0){
        k = str[i] % 16;
        str[i] = str[i] / 16;
        temp[j] = hex[k];
        j++;
        if (str[i] == 0) {
          temp[j] = '0';
          break;
        }
      }
      putchar('\\');
      while(j >= 0){
        putchar(temp[j]);
        j--;
      }
    }
    putchar(str[i]);
    i++;
  }
}
