#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "genericList.h"
#include "genericStack.h"

#define LEN 40

struct generic_stack {
  char data[LEN];
  struct node *top;
};

stack_t new_stack()
{
  list_t l;
  stack_t s;

  if((s = malloc(sizeof(stack_t))) ||
    (l = malloc(sizeof(list_t))) == NULL)
    exit(EXIT_FAILURE);

  /* set the list to the top of the stack */
  l->nextptr = s->top;
  s->top = l;

  return s;
}

void push(stack_t s, char *article)
{
  struct node *newNode = create_node();

  strcpy(newNode->data, article);

  printf("[ newNode->data ] -> %s\n", newNode->data);

  newNode->nextptr = s->top;

  s->top = newNode;
}
