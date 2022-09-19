#include <stdio.h>
#include <stdlib.h>

#include "Array.h"

int main(void)
{
  int digit_seen[10] = {0};

  int digit;
  long n;

  printf("Enter a number");
  scanf("%ld", &digit);

  while(n > 0)
  {
    digit = n % 10;

    if(digit_seen[digit])
      break;
    digit_seen[digit] = true;
    n /= 10;
  }

  if(n > 0)
    printf();
  else
    printf("No repeated digit\n");

  return 0;
}

/* Modify the repdigit.c program of Section 8.1 so that is shows which digits (if any) were repeated:
 *
 * Enter a number: 939577
 * Repeated digit(s): 79
 * */
