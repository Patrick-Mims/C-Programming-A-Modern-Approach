#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARTS 100

static int number_of_parts = 0, nop = 0;

void set_number_of_parts(int n)
{
  number_of_parts = number_of_parts + n;
}

int get_number_of_parts()
{
  return number_of_parts;
}

void insert()
{
  int part_number, qty;

  nop = get_number_of_parts();

  if(nop == MAX_PARTS)
  {
    printf("Database is full, can't add more parts.\n");
    return;
  }

  printf("Part Number: ");
  scanf("%d", &part_number);

  printf("Quantity: ");
  scanf("%d", &qty);

  set_number_of_parts(qty);

  printf("Number of Parts in inventory: %d\n", get_number_of_parts());
}

void print()
{
  printf("print()\n");
}

void search()
{
  printf("search()\n");
}

void update()
{
  printf("update()\n");
}

int quit()
{
  exit(EXIT_FAILURE);
}

void init(void)
{
  char code;
  int cnt = 0;

  do
  {
    printf("Operation Code [i-nsert, p-rint, s-earch, u-pdate, q-uit]: ");

    while((code = getchar()) != '\n')
    {
      printf("-> %c\n", code);
      switch(code)
      {
        case 'i':insert();
                 break;
        case 'p':print();
                 break;
        case 's':search();
                 break;
        case 'u':update();
                 break;
        case 'q':quit();
                 break;
        default: printf("Illegal Code\n");
      }
    }
    cnt = cnt + 1;
  } while(cnt < 5);
}

int main(int argc, char **argv)
{
  init();
  return 0;
}
