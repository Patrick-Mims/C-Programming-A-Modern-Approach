#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(void)
{
  Stack stack = create_stack();

  if(is_empty(stack) == 0)
    printf("\nStack is empty\n");

  push(stack, 100);
  push(stack, 200);
  push(stack, 300);
  push(stack, 400);
  push(stack, 500);

  printf("Item popped off the stack-> %d\n", pop(stack));
  printf("Item popped off the stack-> %d\n", pop(stack));
  printf("Item popped off the stack-> %d\n", pop(stack));
  printf("Item popped off the stack-> %d\n", pop(stack));
  printf("Item popped off the stack-> %d\n", pop(stack));

  destroy_stack(stack);

  return 0;
}
