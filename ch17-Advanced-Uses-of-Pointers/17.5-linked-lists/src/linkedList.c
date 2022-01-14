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

struct node *search_list(struct node *list, int partnumber)
{
    struct node *s = NULL;

    if((s = malloc(sizeof(struct node))) == NULL)
    {
        exit(EXIT_FAILURE);
    }

    for(s = list; s != NULL; s = s->next)
    {
        if(s->partnumber == partnumber)
        {
            return s;
        }
    }

    return NULL;
}

struct node *create_node(struct node *list, const char *part, const int number)
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

struct node *add_node(struct node **list, char *part, int num)
{
    struct node *new_node = NULL;

    if((new_node = malloc(sizeof(struct node))) == NULL)
    {
        exit(EXIT_FAILURE);
    }

    strcpy(new_node->description, part);
    new_node->partnumber = num;

    new_node->next = *list;
    *list = new_node;
}

int main(int argc, char **argv)
{
  char part[INDEX];
  int count = 1, item = 0;

  // First node in the list
  struct node *head = NULL;

  // Request space for one node
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
      int j = 0;

      do
      {
        printf("Search By Part Number: ");

        scanf("%d", &item);

        head = search_list(head, item);

        printf("\nFound Description: %s\n", head->description);

        j = j + 1;

      } while(j < 5);
    }

    printf("Part Description: ");
    scanf("%s", part);

    add_node(&head, part, item);
    printf("Part Description Entered after add_node: %s\n", (*head).description);

    printf("\n");
    printf("Catalog Entry %d \nPart Number: %d\nDescription: %s\n", count, head->partnumber, (*head).description);
    printf("\n");

    count = count + 1;
  } while(item != 0);

  return 0;
}
