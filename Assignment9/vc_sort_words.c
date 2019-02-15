/**
* File              : vc_sort_words.c
* Author            : Shota, Ozan
* Date              : Fri 14 Feb 2019
*/

#include <stdio.h>
#include <stdlib.h>  
#include "vc_split_whitespaces.h"


int vc_strcmp(char *s1, char *s2)
{
  while (*s1 && (*s1 == *s2))
  {
    s1++;
    s2++;
  }
  return *(unsigned char *)s1 - *(unsigned char *)s2;
}


void vc_sort_words(char **words) {
  char **countPtr = words;
  int count = 0;
  char *temp;
  while(countPtr[count] != NULL){
    count++;
  }
  
  char **wordPtr = words;
  for(size_t i = 0; i < count - 1; i++)
  {
    for(size_t j = 0; j < count - 1; j++)
    {
      int result = 0;
      result = vc_strcmp(wordPtr[j], wordPtr[j + 1]);
      if (result >= 0) {
        temp = wordPtr[j];
        wordPtr[j] = wordPtr[j + 1];
        wordPtr[j + 1] = temp;
      }
    }
    count--;
  }
}


int main() {
  char *words = "aac aaa bbbf xxx f ccc sss ddd";
  char **sortedWords = vc_split_whitespaces(words);
  vc_sort_words(sortedWords);
  char **oneWord = sortedWords;
  int c = 0;
  while(oneWord[c] != NULL){
    c++;
  }
}