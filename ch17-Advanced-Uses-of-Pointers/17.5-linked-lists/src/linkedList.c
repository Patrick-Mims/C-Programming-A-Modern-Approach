#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INDEX 16

/* Linked List */
struct node
{
  char description[INDEX];
  int partnumber;
  struct node *next;
};

struct node *displaylist(struct node *list)
{
    struct node *p;
    printf("Catalog\n");
    for(p = list; p != NULL; p = p->next)
    {
        printf("%s\n%d\n", p->description, p->partnumber);
        printf("\n");
    }
}

struct node *createnode(struct node *list, const char *part, const int number)
{
  struct node *new_node = NULL;

  if((new_node = malloc(sizeof(struct node))) == NULL)
  {
    exit(EXIT_FAILURE);
  }

  strcpy(new_node->description, part);

  new_node->partnumber = number;
  new_node->next = list;

  return new_node;
}

int main(int argc, char **argv)
{
  char part[INDEX];
  int count = 1, item = 0;
  struct node *head = NULL;

  if((head = malloc(sizeof(struct node))) == NULL)
  {
    exit(EXIT_FAILURE);
  }

  do
  {
    printf("\n");
    printf("Part Number [ 0 to quit ]: ");
    scanf("%d", &item);

    if(item == 0)
    {
        displaylist(head);
    }

    printf("Part Description: ");
    scanf("%s", part);

    head = createnode(head, part, item);

    printf("\n");
    printf("Catalog Entry %d \nPart Number: %d\nDescription: %s\n", count, head->partnumber, head->description);
    printf("\n");

    count = count + 1;
  } while(item != 0);

  return 0;
}
