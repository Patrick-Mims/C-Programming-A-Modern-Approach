#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "emailList.h"

void init()
{
  char item[40] = {0};

  struct node *head = createNode();

  FILE *file;
  if((file = fopen("Data.txt", "r")) == NULL)
    exit(EXIT_FAILURE);

  while(fgets(item, 50, file))
    insertNode(&head,item);

  displayList(head);

  fclose(file);
}
