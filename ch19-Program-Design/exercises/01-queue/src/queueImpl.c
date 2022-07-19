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

  if((q->contents = malloc(size * sizeof(Type))) == NULL)
  {
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

void push(Que q, Type item)
{
//  printf("-> isFull() - size: %d-%d\n", isFull(q), q->size);

  if(isFull(q))
  {
    printf("Queue is full, exiting...");
    exit(EXIT_FAILURE);
  }

  q->top++;
  q->contents[q->top] = item;

 // printf("isFull-> %d q->top - q->size %d-%d\n", isFull(q), q->top, q->size);
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
