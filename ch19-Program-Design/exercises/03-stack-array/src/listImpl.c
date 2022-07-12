#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "emailList.h"

struct node *createNode()
{
  struct node *newNode = NULL;

  if((newNode = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  return newNode;
}

void display(struct node *list)
{
  for(; list != NULL; list = list->nextptr)
  {
    printf("-> %s\n", list->data);
  }
}

void insert(struct node **list, char *address)
{
  struct node *newNode = createNode();

  strcpy(newNode->data, address);

  newNode->nextptr = *list;
  *list = newNode;
}

