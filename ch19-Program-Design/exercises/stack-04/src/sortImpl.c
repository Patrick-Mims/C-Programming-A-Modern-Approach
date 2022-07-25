#include <stdio.h>
#include <stdlib.h>

#include "ccStack.h"

int sort_stack(int n)
{
  printf("hello\n");

  if(n <= 1)
    return 1;

  return n * sort_stack(n - 1);
}
