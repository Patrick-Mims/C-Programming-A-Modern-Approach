#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "emailList.h"

struct node *head = NULL;

void init()
{
  int line_count = 0;
  char line[40] = {0};
  char *path = "Data.txt";
  char email[30];

  struct node *emails = createNode();

  FILE *file;
  if((file = fopen(path, "r")) == NULL)
  {
    perror(path);
    exit(EXIT_FAILURE);
  }

  while(fgets(line, 40, file))
  {
    printf("line[%06d]: %s\n", ++line_count, line);
  }


  printf("value of email: %s\n", email);

  display(head);

  fclose(file);
}
