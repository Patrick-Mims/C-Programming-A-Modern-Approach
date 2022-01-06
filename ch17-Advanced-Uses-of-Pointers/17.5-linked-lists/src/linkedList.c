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

/* finish this function call */
/*
struct node *search(struct node *list)
{

}
*/

struct node *createnode(struct node *list, int number)
{
  struct node *new_node = NULL;

  if((new_node = malloc(sizeof(struct node))) == NULL)
  {
    exit(EXIT_FAILURE);
  }

  new_node->partNum = number;
  new_node->next = list;

  return new_node;
}

int main(int argc, char **argv)
{
  int item = 0;
  struct node *head = NULL;

  if((head = malloc(sizeof(struct node))) == NULL)
  {
    exit(EXIT_FAILURE);
  }

  printf("Create a list of integers\n");

  do
  {
    scanf("%d", &item);

    printf("Adding %d to the list...\n", item);

    head = createnode(head, item);

    printf("Added: %d\n", head->partNum);

  } while(item != 0);

  return 0;
}
