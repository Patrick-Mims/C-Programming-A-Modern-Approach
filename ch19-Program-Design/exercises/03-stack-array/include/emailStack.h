#ifndef EMAIL_STACK_H
#define EMAIL_STACK_H

/* incomplete type */
typedef int Item;
typedef struct emailStack *Stack;

struct state_type
{
    Item *contents;
    Item top;
    Item size;
};

Stack create_stack();
void destroy_stack(Stack);
void makeEmpty(Stack);
Item isEmpty(Stack);
Item isFull(Stack);
void push(Stack);
Item pop(Stack);

#endif
