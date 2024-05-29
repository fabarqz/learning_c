#include <stdio.h>

int main()
{
  int word;
  long nc;
  nc = 0;
  printf("This is a bare-bones program that counts the characters in a given string. It counts alphanumeric characters and symbols while ignoring spaces and newline characters.\n");
  printf("Enter a string of words to be counted: ");
  while ((word = getchar()) != '\n')
  {
    if (word != '\n' && word != ' ')
    {
      ++nc;
    }
  }
  printf("The total character count is: %ld\n", word, nc);
  return 0;
}