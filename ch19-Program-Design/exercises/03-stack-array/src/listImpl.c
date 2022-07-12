#include <stdio.h>
#include <stdlib.h>

#include "emailList.h"

struct node *createNode()
{
    struct node *newNode = NULL;

    if((newNode = malloc(sizeof(struct node))) == NULL)
      exit(EXIT_FAILURE);

    /*
    newNode->nextptr = head;
    head = newNode;
    */

    return newNode;
}

void display(struct node *list)
{
  struct node *p = createNode();

  for(p = list; p != NULL; p = p->nextptr)
  {
    printf("Display: %s\n", p->data);
  }
}
