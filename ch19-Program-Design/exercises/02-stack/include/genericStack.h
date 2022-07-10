#ifndef GENERIC_STACK_H
#define GENERIC_STACK_H

typedef struct generic_stack *stack_t;
typedef struct node *list_t;

stack_t new_stack();
stack_t destroy_stack(stack_t);

int pop(stack_t);
int size(stack_t);
int isFull(stack_t);
int isEmpty(stack_t);
void makeEmpty(stack_t);
void push(stack_t, char *);

#endif
