#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "stack.h"

#define INDEX 50

struct stack_t
{
  int contents[INDEX];
  int top;
};

//struct node *head = NULL;

Stack create_stack()
{
  Stack st;

  if((st = malloc(sizeof(struct stack_t))) == NULL)
    exit(EXIT_FAILURE);

  st->top = 0;

  return st;
}

bool is_empty(Stack s)
{
  return s->top == 0;
}

int pop(Stack p)
{
  printf("p->data\n");
  if(is_empty(p))
    exit(EXIT_FAILURE);

  return p->contents[--p->top];
}

bool is_full(Stack f)
{
  return f->top == INDEX;
}

void push(Stack st, int data)
{
  if(is_full(st))
  {
    printf("Stack is Full\n");
    exit(EXIT_FAILURE);
  }

  st->contents[st->top++] = data;
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
