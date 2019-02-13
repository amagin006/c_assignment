/**
* File              : vc_print_words.c
* Author            : Shota, Paulo, Ayana
* Date              : Fri 11 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>


char **vc_print_words(char *str){
  
}

int main() {
  char *word = "Hello    world\nI like an  apple";
  char **w = vc_split_whitespaces(word);
  for(int i = 0; i < 6; i++){
    printf("%s", w[i]);
  }
  return 0;
}