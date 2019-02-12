/**
* File              : vc_split_whitespaces.c
* Author            : Shota, Paulo, Ayana
* Date              : Fri 11 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>
// count words
static int vc_count_words(char *str) {
  int i = 0;
  int wordNum = 0;
  while(str[i]) {
    while (str[i] == 32 || str[i] == 9 || str[i] == '\n') {
      i++;
    }
    if (str[i] && str[i] != 32 && str[i] != 9 && str[i] != '\n') {
      wordNum++;
      while (str[i] && str[i] != 32 && str[i] != 9 && str[i] != '\n') {
        i++;
      }
    }
  }
  return wordNum;
}
// count chars in a word
static int vc_count_chars(char *str) {
  int i = 0;
  while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
    i++;
  }
  return i;
}


char **vc_split_whitespaces(char *str){
  int numWords = vc_count_words(str);
  printf("%d", numWords);

  char **arrpointer = (char **) malloc(sizeof(char *) * (numWords + 1));
  int i = 0;
  int pos = 0;
  while (str[pos] && numWords--) {
    int numChars = vc_count_chars(str);
    arrpointer[i] = (char *) malloc(numChars * sizeof(char))
    for(int j=0; j<numChars; j++) {
      arrpointer[i][j] = str[j];
      pos++;
    }
    str += pos + 1;
    i++;
  }

  return arrpointer;
}

int main() {
  char *word = "Hello world\nI like an  apple";
  vc_split_whitespaces(word);
  return 0;
}