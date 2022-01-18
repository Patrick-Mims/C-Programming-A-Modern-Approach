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

struct node
{
  void *item;
};

struct node *my_malloc(struct node *list)
{
  if((list = malloc(sizeof(list))) == NULL)
  {
    return NULL;
  }
  return list;
}

int main(int argc, char **argv)
{
  struct node *head = NULL;

  my_malloc(head);

  return 0;
}
