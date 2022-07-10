#include <stdio.h>
#include <stdlib.h>

#include "genericList.h"
#include "genericStack.h"

int main()
{
  stack_t s = new_stack();

  push(s,"Kim Jong Un");
  printf("Working With client.c\n");
  display();

  return 0;
}

/* push an item to the stack, and display it with the list */

/* Working on display() */
