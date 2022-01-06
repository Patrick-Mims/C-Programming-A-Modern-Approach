#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INDEX 16

/* Linked List */

struct node
{
  char name[INDEX];
  int partNum;
  struct node *next;
};

/* insert a new node */
struct node *createNode(struct node *list, int n)
{
    struct node *new_node = NULL;

    if((new_node = malloc(sizeof(struct node))) == NULL)
    {
      exit(EXIT_FAILURE);
    }

    new_node->partNum = n;
    new_node->next = list;

    return new_node;
}

int main(int argc, char **argv)
{
  struct node *head = NULL;

  if((head = malloc(sizeof(struct node))) == NULL)
  {
    exit(EXIT_FAILURE);
  }

  head = createNode(head, 25);

  return 0;
}
