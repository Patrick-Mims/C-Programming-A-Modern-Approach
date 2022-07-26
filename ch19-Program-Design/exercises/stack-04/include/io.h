#ifndef IO_H
#define IO_H

FILE *read_addresses()
{
  FILE *file;
  char *num;

  if((file = fopen("temp.txt", "r")) == NULL)
    exit (EXIT_FAILURE);

  fscan(fptr, "%d", num);

  printf("Value %s\n", num);

  fclose();
}

#endif
