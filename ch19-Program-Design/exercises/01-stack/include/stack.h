#ifndef STACK_H
#define STACK_H

#define INDEX 20

typedef int type;

struct node
{
  type data;
  struct node *nextPtr;
};

typedef struct stack_type *Stack;

void stack_init();
bool is_empty();
int is_full();
int push(int);
int pop();
void make_empty();

#endif
