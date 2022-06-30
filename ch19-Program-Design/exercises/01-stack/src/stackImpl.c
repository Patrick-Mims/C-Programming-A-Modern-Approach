#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

#define STACK_SIZE 50

struct stack_t
{
  int contents[STACK_SIZE];
  int top;
};

Stack create_stack()
{
  Stack st;

  if((st = malloc(sizeof(struct stack_t))) == NULL)
    exit(EXIT_FAILURE);

  st->top = 0;

  return st;
}

Stack destroy_stack(Stack stack)
{
  free(stack);
}

bool is_empty(Stack stack)
{
  return stack->top == 0;
}

bool is_full(Stack stack)
{
  return stack->top == STACK_SIZE;
}

int pop(Stack stack)
{
  if(is_empty(stack))
    exit(EXIT_FAILURE);

  return stack->contents[--stack->top];
}

void push(Stack stack, int data)
{
  if(is_full(stack))
  {
    printf("Stack is Full\n");
    exit(EXIT_FAILURE);
  }

  stack->contents[stack->top++] = data;
}
