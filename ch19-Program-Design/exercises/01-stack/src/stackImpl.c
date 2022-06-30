#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "stack.h"

struct stack_type
{
  struct node *top;
};

//struct node *head = NULL;

Stack create_stack()
{
  Stack st;

  if((st = malloc(sizeof(struct stack_type))) == NULL)
    exit(EXIT_FAILURE);

  st->top = 0;

  return st;
}

bool is_empty(Stack s)
{
  return s->top == NULL;
}

int pop(Stack p)
{
    printf("p->data\n");
}

void push(Stack st, int d)
{
  if(is_full())
  {

  }
}

/*
static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void make_empty()
{
  while(!is_empty(struct node *s))
  {
    pop();
  }
}

int is_full()
{
  return 0;
}

int push(int item)
{
  struct node *newNode = NULL;

  if((newNode = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  newNode->data = item;
  newNode->nextPtr = top;
  top = newNode;
}

int pop()
{
  struct node *old_top = NULL;

  if((old_top = malloc(sizeof(struct node))) == NULL)
    terminate("Error in pop: memmory for old_top cannot be allocated.");

  int i;

  if(is_empty(struct node *s))
    terminate("Error in pop: stack is empty.");

  old_top = top;
  i = top->data;
  top = top->nextPtr;
  free(old_top);

  return i;
}
*/
