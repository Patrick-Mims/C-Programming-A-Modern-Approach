#ifndef QUEUE_H
#define QUEUE_H

typedef int Type;
typedef struct Queue *Que;

Que createqueue(Type);
Que destroyqueue(Que);

Type isFull(Que);
Type isEmpty(Que);
Type pop(Que);

void displayQueue(Que);
void insert(Que);
void makeEmpty(Que);
void push(Que, Type);

#endif
