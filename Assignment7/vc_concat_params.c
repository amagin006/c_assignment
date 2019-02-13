/**
* File              : vc_concat_params.c
* Author            : Shota, Paulo, Ayana
* Date              : Fri 11 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>

char *vc_concat_params(int argc, char **argv) {
  char *arr;
  int count = 0;
  for(int i = 1; i < argc; i++)
  {
    arr = argv[i];
    do {
      count++;
    } while(*arr++);
    count--;
  }
  char *temp = (char *)malloc(count * 2);

  int f = 0;
  for(int j = 1; j < argc; j++)
  {
    arr = argv[j];
    do {
      if (arr[0] == '\0') {
        break;
      }
      temp[f] = arr[0];
      printf("%c", temp[f]);
      f++;
      temp[f] = '\n';
      printf("%c", temp[f]);
      f++;
    } while (*arr++);
  }
  
  char *set = temp;
  return set;
}

int main(int argc, char *argv[]) {
  
  vc_concat_params(argc, argv);
  return 0;
}