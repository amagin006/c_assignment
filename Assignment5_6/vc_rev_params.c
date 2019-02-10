/**
* File              : vc_rev_params.c
* Author            : Shota, Paulo
* Date              : Fri 8 Feb 2019
*/

#include <stdio.h>

int main(int argc, char *argv[]){
  int i;
  printf("%s\n", argv[0]);
  for(i = argc - 1; i > 0; i--)
    printf("%s\n", argv[i]);
  return 0;
}