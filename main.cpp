
/* include local C header file */
extern "C" {
  #include "utils.h"
}

#include <stdio.h>

int main()
{
  utils_init();
	printf("value: %d\n", value);
  utils_inc();
	printf("value: %d\n", value);

  return 0;
}

