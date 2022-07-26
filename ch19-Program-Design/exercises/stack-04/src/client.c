#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>

#include "ccStack.h"
#include "ccList.h"

/*
#include "emailList.h"
#include "emailStack.h"
*/

int main(int argc, char **argv)
{
  CStack creditstack  = cc_stack_create(20);
  CList head = createNode();

  printf("Welcome to the Stack\n");

  cc_stack_push(creditstack, 5032);
  cc_stack_push(creditstack, 8912);
  cc_stack_push(creditstack, 4500);
  cc_stack_push(creditstack, 3299);
  cc_stack_push(creditstack, 8912);
  cc_stack_push(creditstack, 2189);
  cc_stack_push(creditstack, 7643);

  cc_stack_display(creditstack);

  insert(&head, 50);
  display(&head);

  return 0;
}
