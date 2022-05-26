#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARTS 100

struct database
{
    char name[26];
    int number;
    int on_hand;
};

static int number_of_parts = 0, nop = 0;

void set_number_of_parts(int n)
{
  number_of_parts = number_of_parts + n;
}

int get_number_of_parts()
{
  return number_of_parts;
}

int get_size_of_database()
{
  return (MAX_PARTS - number_of_parts);
}

void insert(struct database *db)
{
  int partNum, qty;

  nop = get_number_of_parts();

  if(nop == MAX_PARTS)
  {
    printf("Database is full, can't add more parts.\n");
    exit(EXIT_FAILURE);
  }

  printf("\n");
  printf("Part Number: ");
  scanf("%d", &partNum);

  /* This should be an array */
  db->number = partNum;

  /* while the size of the entry is smaller than the size of the DB */
  do
  {
    printf("Quantity: ");
    scanf("%d", &qty);
  } while(qty > get_size_of_database());

  set_number_of_parts(qty);

  printf("Number of Parts in inventory: %d\n", get_number_of_parts());
  printf("Available Capacity: %d\n", get_size_of_database());
  printf("\n");
  printf("Recent part number: %d\n", db->number);

  if(get_size_of_database() == 0)
    exit(EXIT_FAILURE);
}

void print()
{
  printf("print()\n");
}

void search()
{
  int i, pnum;

  printf("Enter Part Number: ");

  scanf("%d", &pnum);

  printf("Part we're searching for...%d\n", pnum);
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

  struct database *db;

  if((db = malloc(sizeof(struct database))) == NULL)
  {
    printf("There's no room\n");
    exit(EXIT_FAILURE);
  }

  do
  {
    printf("Operation Code [i-nsert, p-rint, s-earch, u-pdate, q-uit]: ");

    while((code = getchar()) != '\n')
    {
      switch(code)
      {
        case 'i':insert(db);
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
