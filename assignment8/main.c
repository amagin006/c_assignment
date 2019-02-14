#include <stdio.h>
#include "vc_param_to_tab.h"
#include "vc_stock.h"
#include "vc_show_tab.h"

int main(int argc, char *argv[]) {

  t_stock *stock = vc_param_to_tab(argc, argv);
  
  vc_show_tab(stock);

  return 0;
}
