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

void displayList(struct node *list)
{
  int cnt = 1;
  for(; list != NULL; list = list->nextptr)
  {
    printf("%d. %s", cnt, list->data);
    cnt = cnt + 1;
  }
}

void insertNode(struct node **list, char *address)
{
  struct node *newNode = createNode();

  strcpy(newNode->data, address);

  newNode->nextptr = *list;
  *list = newNode;
}
