#ifndef QUEUE_H
#define QUEUE_H

typedef int Type;
typedef struct Queue *Que;

Que createqueue(int);
Que destroyqueue(Que);

Type isFull(Que);
Type isEmpty(Que);

void displayQueue(Que);
void insert(Que);
void makeEmpty(Que);
int pop(Que);
void push(Que, int);

#endif
