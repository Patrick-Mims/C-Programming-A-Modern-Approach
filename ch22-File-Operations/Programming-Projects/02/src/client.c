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

void error()
{
  printf("Error: Not enough params\n");
  printf("usage: ./client file\n");
}

int main(int argc, char **argv)
{
  FILE *file;

  if(argc < 2)
  {
    error();
    exit(EXIT_FAILURE);
  }

  printf("file -> %s\n", argv[1]);

  if((file = fopen(argv[argc - 1], "r")) == NULL)
  {
    printf("%s can't be opened\n", argv[i]);
    exit(EXIT_FAILURE);
  }

  freopen("file.txt", "w+", stdout);

  printf("File was opened successfully\n");

  fclose(file);

  return 0;
}
