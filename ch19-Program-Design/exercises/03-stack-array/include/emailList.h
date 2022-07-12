#ifndef EMAIL_LIST_H
#define EMAIL_LIST_H

#define DATA_SIZE 50

struct node
{
  char data[DATA_SIZE];
  struct node *nextptr;
};

struct node *createNode();
void display(struct node *);

#endif
