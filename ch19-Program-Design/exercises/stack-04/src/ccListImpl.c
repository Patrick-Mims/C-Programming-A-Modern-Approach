#include <stdio.h>
#include <stdlib.h>

#include "ccList.h"

struct node
{
  int data;
  struct node *nextptr;
};

CList createNode()
{
  CList cl;

  if((cl = malloc(sizeof(CList))) == NULL)
    exit(EXIT_FAILURE);

  return cl;
}

void insert(struct node **list, int item)
{
  printf("Inserting...%d\n", item);
  struct node *newNode = NULL;

  if((newNode = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  newNode->data = item;
  newNode->nextptr = *list;

  *list = newNode;
}

void display(struct node **list)
{
  printf("Displaying List");
  for(*list; *list != NULL; *list = (*list)->nextptr)
  {
    printf("(*list)->data %d\n", (*list)->data);
  }
}
