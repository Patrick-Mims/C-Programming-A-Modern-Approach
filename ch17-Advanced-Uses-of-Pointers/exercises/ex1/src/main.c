/* Having to check the return value of malloc (or any other memory allocation
 * function) each time we call it can be an annoyance.
 *
 * 1. Write a function named my_malloc and ask it to allocate n bytes
 *
 * 2. It in turn calls malloc
 *
 * 3. Test to make sure that malloc doesn't return a null pointer
 *
 * 4. and then returns the pointer from malloc.
 *
 * 5. Have my malloc print an error message and terminate the program
 * if malloc returns a null pointer.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

struct node
{
  char item[SIZE];
  struct node *next;
};

struct node *my_malloc(struct node *list)
{
  if((list = malloc(sizeof(struct node))) == NULL)
  {
    return NULL;
  }
  return list;
}

struct node *insert(struct node *list, char *str)
{
  struct node *new_node = NULL;
  new_node = my_malloc(new_node);

  strcpy(new_node->item, str);

  new_node->next = list;
  list = new_node;

  return new_node;
}

int main(int argc, char **argv)
{
  struct node *head = NULL;

  head = my_malloc(head);

  strcpy(head->item, "hello");

  printf("%s\n", head->item);

  struct node *new_node = NULL;
  new_node = insert(head, "YouTube");

  printf("%s\n", new_node->item);

  return 0;
}
