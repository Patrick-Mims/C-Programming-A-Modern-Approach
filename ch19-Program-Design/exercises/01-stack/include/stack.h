#ifndef STACK_H
#define STACK_H

typedef int type;

struct node
{
  type data;
  struct node *nextPtr;
};

typedef struct stack_t *Stack;

Stack create_stack();
Stack destroy_stack();

bool is_empty(Stack);
bool is_full();
void push(Stack, type);
type pop(Stack);
void make_empty();

#endif
