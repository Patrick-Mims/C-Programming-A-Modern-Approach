#ifndef CCLIST_H
#define CCLIST_H

typedef struct node *CList;

void insert(struct node **, int);
CList createNode();
void display(struct node **);

#endif
