#ifndef GENERIC_LIST_H
#define GENERIC_LIST_H

struct node
{
  char data[50];
  struct node *nextptr;
};

// typedef struct node *List;

struct node *create_node();
struct node insert(struct node **, int);
struct node display();
struct node deleteNode(struct node **);

#endif
