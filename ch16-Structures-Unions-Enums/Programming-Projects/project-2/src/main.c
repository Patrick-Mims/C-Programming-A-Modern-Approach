#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert()
{
    printf("insert()\n");
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

void quit()
{
    printf("quit()\n");
}

void init_start(void)
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
      }
    }
    cnt = cnt + 1;
  } while(cnt < 5);
}

int main(int argc, char **argv)
{
  init_start();
  return 0;
}
