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
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
      i++;
    }
    if (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
      wordNum++;
      while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
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
// count space between word
static int vc_count_space(char *str) {
  int i = 0;
  while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')){
    i++;
  }
  return i;
}


char **vc_split_whitespaces(char *str){
  int numWords = vc_count_words(str);
  char **arrpointer = (char **) malloc(sizeof(char *) * (numWords + 1));
  int i = 0;
  int pos = 0;
  while (str[0] && numWords--) {
    int numChars = vc_count_chars(str);
    arrpointer[i] = (char *) malloc(numChars * sizeof(char));
    for(int j=0; j<numChars; j++) {
      arrpointer[i][j] = str[j];
      pos++;
    }
    // move pointer
    str += pos;
    int whiteNum = vc_count_space(str); 
    str += whiteNum;
    pos = 0;
    i++;
  }
  arrpointer[i] = (char *) malloc(sizeof(char));
  arrpointer[i][0] = '0';
  return arrpointer;
}
