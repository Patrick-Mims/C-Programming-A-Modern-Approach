#ifndef STACK_H
#define STACK_H

#define INDEX 50

typedef int type;

struct node
{
  type data;
  struct node *nextPtr;
};

typedef struct stack_type *Stack;

Stack create_stack();
Stack destroy_stack();

bool is_empty();
int is_full();
void push(Stack, int);
int pop(Stack);
void make_empty();

#endif
