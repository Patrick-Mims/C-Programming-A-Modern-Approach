#include <stdio.h>
#include <stdlib.h>

#include "ccList.h"

struct node
{
  int data;
  struct node *nextptr;
};

struct node *createNode()
{
  struct node *newNode = NULL;

  if((newNode = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  return newNode;
}

void insert(struct node **list, Type item)
{
  struct node *newNode = NULL;

  if((newNode = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  newNode->data = item;
  newNode->nextptr = *list;

  *list = newNode;
}
