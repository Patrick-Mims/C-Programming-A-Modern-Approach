#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(void)
{
  Stack s1;
  s1 = create_stack();

  if(is_empty() == 0)
    printf("\nIt's empty\n");

    push(s1, 30);
  return 0;
}
