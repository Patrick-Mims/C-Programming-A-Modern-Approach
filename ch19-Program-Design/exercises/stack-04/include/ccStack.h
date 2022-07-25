#ifndef CC_STACK_H
#define CC_STACK_H

/* Dynamic Array */
typedef int Type;
typedef struct cstack *CStack;

CStack cc_stack_create(Type);
static int cc_stack_isEmpty(CStack);
static int cc_stack_isFull(CStack);
static int cc_stack_pop(CStack);
static void cc_stack_destroy(CStack);
void cc_stack_display(CStack);
static void cc_stack_makeEmpty(CStack);
void cc_stack_push(CStack, Type);
static int cc_stack_volume(CStack);
int sort_stack(int);

#endif
