
extern "C" {
  #include "utils.h"
}

/* variable */
int value;

void utils_init()
{
  value = 0;
}


void utils_inc()
{
  value++;
}
