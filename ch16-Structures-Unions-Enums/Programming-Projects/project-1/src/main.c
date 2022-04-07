/* 1. Write a program that asks the user to enter an international dialing code.
 *
 * 2. Then Look it up the dialing code in the country_codes array.
 *
 * 3. If it finds the code display the name of the corresponding country;
 *
 * 4. if not, print an error message.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "code.h"

struct node *display(struct node *list)
{
  struct node *p = NULL;

  for(p = list; p != NULL; p = p->next)
  {
    printf("Display: %s\n", p->country);
  }
}

struct node *insert_node(struct node **list, char *country)
{
  struct node *new_node = NULL;

  if((new_node = malloc(sizeof(struct node))) == NULL)
  {
    exit(EXIT_FAILURE);
  }

  strncpy(new_node->country, country, sizeof(struct node));

  new_node->next = *list;

  *list = new_node;
}

int main(int argc, char **argv)
{
  FILE *fp = NULL;
  char buffer[200];

  struct node *head = NULL;

  if((head = malloc(sizeof(struct node))) == NULL)
  {
    exit(EXIT_FAILURE);
  }

  if((fp = fopen("codes.txt", "r")) == NULL) // open for reading only
  {
    printf("There has seem to been an error: File Not Found");
    exit(EXIT_FAILURE);
  }

  while(fscanf(fp, "%s\n", buffer) != EOF);
  {
    printf("buffer -> %s\n", buffer);
    insert_node(&head, buffer);
  }

  fclose(fp);

  display(head);

  return 0;
}
