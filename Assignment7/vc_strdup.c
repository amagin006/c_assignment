/**
* File              : vc_strdup.c
* Author            : Shota, Paulo, Ayana
* Date              : Fri 11 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>

char *vc_strdup(char *src) {
  int i = 0;
  while(src[i]){
    i++;
  }
  char *strd;
  strd = (char*)malloc(i + 1);
  if(strd == NULL){
    exit(EXIT_FAILURE);
  }

  // copy over characters to strd
  for(int c = 0; c < i; c++)
  {
    strd[c] = src[c];
  }
  strd[i + 1] = '\0';
  
  return strd;
}

int main() {

  char *s1 = "String";
  char *s2 = vc_strdup(s1);
  // s2 = s1;
  printf("%s\n", s2);
  free(s2);
  return 0;
}