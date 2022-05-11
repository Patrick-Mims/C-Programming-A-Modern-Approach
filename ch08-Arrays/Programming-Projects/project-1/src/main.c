#include <stdbool.h>
#include <stdio.h>

#define TRUE  __bool_true_false_are_defined

int main(int argc, char **argv)
{
  printf("true or false -> %d\n", TRUE);

  return 0;
}
