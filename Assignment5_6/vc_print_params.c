/**
* File              : vc_print_params.c
* Author            : Shota, Paulo
* Date              : Fri 8 Feb 2019
*/

#include <stdio.h>

int main(int argc, char *argv[]){
  int i;
  for(i = 0; i < argc; i++)
    printf("%s\n ", argv[i]);
  return 0;
}