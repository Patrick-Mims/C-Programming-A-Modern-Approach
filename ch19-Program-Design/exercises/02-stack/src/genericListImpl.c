#include <stdio.h>
#include <stdlib.h>

#include "genericList.h"

struct node *create_node()
{
  printf("creating new node\n");

  struct node *n = NULL;

  if((n = malloc(sizeof(struct node))) == NULL)
    exit(EXIT_FAILURE);

  return n;
}

struct node display()
{
  printf("Display()\n");
  /*
  list_t p = NULL;

  for(p = *list; p != NULL; p = (*list)->nextptr)
  {
    printf("display -> %s\n", (*list)->data);
  }
  */
}
