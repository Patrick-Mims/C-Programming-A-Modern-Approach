#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a program that converts all letters in a file to upper case.
 *
 * (Characters other than letters shouldn't be changed.)
 *
 * The program should obtain the file name from the command line and write its
 * output to stdout
 * */

void error()
{
  printf("Error: Not enough params\n");
  printf("usage: ./client file\n");
}

int main(int argc, char **argv)
{
  const int index = 50;
  char *buffer;
  FILE *file;

  if(argc < 2)
  {
    error();
    exit(EXIT_FAILURE);
  }

  printf("file -> %s\n", argv[1]);

  /* Dynamic Allocated Array */
  if((buffer = calloc(index, sizeof(char))) == NULL)
  {
    printf("Can't allocate memory for buffer - dynamic array\n");
    exit(EXIT_FAILURE);
  }

  if((file = fopen(argv[argc - 1], "r")) == NULL)
  {
    printf("%s can't be opened\n", argv[argc - 1]);
    exit(EXIT_FAILURE);
  }

  if(setvbuf(file, buffer, _IOFBF, index) < 0)
    printf("setvbuf error\n");

  freopen("file.txt", "w+", stdout);

  printf("File was opened successfully\n");

  fclose(file);

  return 0;
}
