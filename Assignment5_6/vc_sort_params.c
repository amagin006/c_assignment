/**
* File              : vc_sort_params.c
* Author            : Shota, Paulo
* Date              : Fri 8 Feb 2019
*/

#include <stdio.h>

int main(int argc, char *argv[]){
  int i;
  int j;
  printf("%s ", argv[0]);

  for(i = 1; i < argc - 1; i++)
  {
    for(j = i + 1; j < argc; j++)
    {
      char *str1 = argv[i];
      char *str2 = argv[j];
      int k =0;
      while(str1[k] && str2[k]){
        if (str1[k] > str2[k]) {
          char *temp = argv[i];
          argv[i] = argv[j];
          argv[j] = temp; 
          break;
        } else if (str1[k] == str2[k]){
          k++;
        } else {
          break;
        }
        
      }
    }
    
  }

  for(int i = 1; i < argc; i++)
  {
    printf("%s ", argv[i]); 
  }
  

  return 0;
}