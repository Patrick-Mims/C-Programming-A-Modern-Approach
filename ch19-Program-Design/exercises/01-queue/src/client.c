#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main(void)
{
  Que que = createqueue(2);

  printf("-> Queue\n");

  push(que, 1500);
  push(que, 3000);

  printf("result: %d\n", pop(que));

  return 0;
}
