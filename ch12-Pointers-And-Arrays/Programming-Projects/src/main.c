/* Write a program that reads a message, then prints the reveral of the message:
 *
 * Example:
 * Enter a message: Don't get mad, get even.
 * Reversal is: .neve teg , dam teg t'noD
 *
 * Hint: Read the message one character at a time (using getchar) and store the
 * the characters in an array. Stop reading when the array is full or the character
 * read is '\n'.
 *
 * b) Revise the program to use a pointer instead of an integer to keep track of the
 * current position in the array.
 * */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(int argc, char **argv)
{
  char ch, list[SIZE];
  int count;

  printf("Enter a message: ");

  do
  {
    ch = getchar();
    list[count] = ch;
    count = count + 1;
  } while(ch != '\n');

  printf("\n");

  printf("Reversed:");

  for(int j = count; j >= 0; j--)
  {
    printf("%c", list[j]);
  }

  printf("\n");

  return 0;
}
