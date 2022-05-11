#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE_10 10

void fileIO()
{
  printf("Inside fileIO\n");
  char line[16] = {0};
  FILE *file;
  unsigned int line_count = 0;

  if((file = fopen("MOCK_DATA.csv", "r")) == NULL)
    exit(EXIT_FAILURE);

  while(fgets(line, 16, file))
  {
    printf("line[%06d]: %s", ++line_count, line);
  }

  fclose(file);
}

int main(int argc, char **argv)
{
  bool digit_seen[SIZE_10] = {false};

  int digit = 0;
  long number = 0;

  printf("Enter A Number: ");

  scanf("%ld", &number);

  printf("Number Entered: %ld\n", number);

  while(number > 0)
  {
    digit = number % 10;

    if(digit_seen[digit])
      break;

    digit_seen[digit] = true;

    number /= 10;
  }

  if (number > 0)
  {
    printf("Repeated digit\n");
  } else {
    printf("No Repeated digit\n");
  }

  fileIO();

  return 0;
}
/* Checks numbers for repeated digits */
