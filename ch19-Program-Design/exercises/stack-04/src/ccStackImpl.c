#include <stdio.h>
#include <stdlib.h>

#include "ccStack.h"

struct cstack
{
  Type *contents;
  Type bottom;
  Type size;
  Type top;
};

CStack cc_stack_create(Type size)
{
  CStack cs;

  if((cs = malloc(sizeof(struct cstack))) == NULL)
    exit(EXIT_FAILURE);

  if((cs->contents = malloc(size * sizeof(Type))) == NULL)
  {
    free(cs);
    exit(EXIT_FAILURE);
  }

  cs->bottom = 0; // set the bottom of the stack to zero
  cs->top = 0; // set the top of the stack to the size passed in
  cs->size = size;

  return cs;
}

static Type cc_stack_isEmpty(CStack cs)
{
  return cs->top == cs->bottom;
}

static Type cc_stack_isFull(CStack cs)
{
  return (cs->top == cs->size);
}

static Type cc_stack_pop(CStack cs)
{
  if(cc_stack_isEmpty(cs))
    exit(EXIT_FAILURE);

  return cs->contents[--cs->top];
}

static void cc_stack_destroy(CStack cs)
{
  free(cs->contents);
  free(cs);
}

void cc_stack_display(CStack cs)
{
  int i;

  if(cc_stack_isEmpty(cs))
  {
    printf("Warning: stack empty\n");
  }

  for(i = 0; i < cs->top; i++)
  {
    printf("contents: %d\n", cs->contents[i]);
  }
}

static void cc_stack_makeEmpty(CStack cs)
{
  cs->top = cs->bottom;
}

void cc_stack_push(CStack cs, Type item)
{
  printf("Adding Item-> %d\n", item);

  if(cc_stack_isFull(cs))
    exit(EXIT_FAILURE);

  cs->contents[cs->top] = item;
  cs->top++;
  printf("Item added to the stack-> %d\n", item);
}
