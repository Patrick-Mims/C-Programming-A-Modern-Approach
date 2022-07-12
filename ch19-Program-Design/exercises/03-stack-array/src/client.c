#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "emailList.h"
#include "emailStack.h"
#include "io.h"

int main(void)
{
  Stack s1;

  struct node *item = createNode();

  strcpy(item->data, "patrickkevinmims@gmail.com");

  printf("item->data %s\n", item->data);

  init();

  return 0;
}
