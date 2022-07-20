#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Extend the canopen.c program of Section 22.2 so that the user may put any
 * number of file names on the command line.
 *
 * client foo bar baz
 *
 * The program should print a seperate can be opened or can't be opened message
 * for each file. Have the program terminate with status EXIT_FAILURE if one or
 * more of the files can't be opened.
 * * */

int main(int argc, char **argv)
{
  int i = 0;
  FILE *fp;

  do {
    printf("-> %s\n", argv[i]);

    if((fp = fopen(argv[i], "r")) == NULL)
    {
      printf("%s can't be opened\n", argv[i]);
      exit(EXIT_FAILURE);
    }

    fclose(fp);

    i = i + 1;
  } while(i < argc);

  printf("-> %s can be opened\n", argv[1]);

  return 0;
}
