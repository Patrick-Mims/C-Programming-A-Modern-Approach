#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a program that converts all letters in a file to upper case.
 *
 * (Characters other than letters shouldn't be changed.)
 *
 * The program shoudl obtain the file name from the command line and write its
 * output of stdout
 * */

int main(int argc, char **argv)
{
  int i = 0;
  FILE *file;

    if((file = fopen(argv[1], "r")) == NULL)
    {
      printf("%s can't be opened\n", argv[i]);
      exit(EXIT_FAILURE);
    }

  if((file = fopen("linux.txt", "r")) == NULL)
  {
    exit(EXIT_FAILURE);
  }

  freopen("file.txt", "w+", stdout);

  printf("Testing Blackholes V3\n");

  fclose(file);

  return 0;
}
