#include <stdio.h>
#include <stdlib.h>

#include "queue.h"
#include "tools.h"

int main(void)
{
  /* create a new queue with a factory */
  Que que = createqueue(2);

  /* add new values to the end of the queue */
  push(que, 1500);
  push(que, 3000);

  printf("result: %d\n", pop(que));

  ghEvents();

  return 0;
}
