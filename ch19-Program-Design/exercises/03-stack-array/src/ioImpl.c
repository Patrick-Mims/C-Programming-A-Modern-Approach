#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "emailList.h"

struct node *head = NULL;

void init()
{
  char email[30];
  FILE *fp;

  struct node *emails = createNode();

  if(!(fp = fopen("emails.txt","r")))
  {
    fprintf(stderr, "could not read file\n");
    exit(EXIT_FAILURE);
  }

  fscanf(fp,"%s",email);

  strcpy(emails->data, email);

  emails->nextptr = head;
  head = emails;

  printf("value of email: %s\n", email);

  fclose(fp);
}
