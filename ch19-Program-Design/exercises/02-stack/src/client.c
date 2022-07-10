#include <stdio.h>
#include <stdlib.h>

#include "genericList.h"
#include "genericStack.h"

int main()
{
  struct node *head = NULL;
  stack_t s = new_stack();
  //list_t l = new_stack();

  /* push an item to the stack, and display it with the list */
  push(s, "Kim Jong Un");

  display(&head);

  printf("Working With client.c\n");

  return 0;
}
