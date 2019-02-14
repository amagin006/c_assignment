#include "vc_stock.h"

void vc_show_tab(struct s_stock *stock) {
  int i = 1;
  while(stock->words[i]){
     printf("%s ", stock->words[i]);
     i++;
  }
  printf("%d\n", stock->size_param);
  char *a = stock->str;
  for(int j = 0; j < stock->size_param; j++)
  {
    printf("%c\n", a[j]);  
  }
}