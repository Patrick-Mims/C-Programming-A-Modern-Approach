#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(void)
{
  type result = 0;
  Stack item = create_stack();

  if(is_empty(item) == 0)
    printf("\nStack is empty\n");

  push(item, 30);

  result = pop(item);

  printf("Item popped off the stack-> %d\n", result);

  return 0;
}
