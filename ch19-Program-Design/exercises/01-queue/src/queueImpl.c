#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

struct Queue
{
  char *contents;
  int top;
  int size;
};

Que createqueue(int size)
{
  Que q;

  if((q = malloc(sizeof(Que))) == NULL)
    exit(EXIT_FAILURE);

  if((q->contents = calloc(size, sizeof(Type))) == NULL)
  {
    printf("Cannot malloc for p->contents\n");
    destroyqueue(q);
    exit(EXIT_FAILURE);
  }

  q->top = 0;
  q->size = size;

  return q;
}

Que destroyqueue(Que q)
{
  free(q->contents);
}

Type isFull(Que q)
{
  return q->top == q->size;
}

Type isEmpty(Que q)
{
  // return 1 if the queue is empty, otherwise return false.
  return q->top == 0;
}

void displayQueue(Que q)
{
  for(int i = 0; i <= q->size; i++)
    printf("Display Queue-> %d\n", q->contents[i]);
}

void push(Que q, Type i)
{
  printf("isFull()-> %d\n", isFull(q));

  if(isFull(q))
  {
    printf("Queue is full, exiting...");
    exit(EXIT_FAILURE);
  }

  printf("Pushing -> %d\n", i);

  q->contents[q->top++] = i;

  printf("top-> %d\n\n", q->top);
}

int pop(Que q)
{
  if(isEmpty(q))
  {
    printf("Queue is full");
    exit(EXIT_FAILURE);
  }

  q->top--;

  return q->contents[q->top];
}
