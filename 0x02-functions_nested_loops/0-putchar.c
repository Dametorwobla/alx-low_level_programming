#include "main.h"

/**
 * main - checks the code for ALX School students.
 *
 *Program that prints _putchar, followed by a new line
 *
 *Returun: always 0 (success)
 */

int main(void)
{
  int i = 0;
  char c;
  char s[] = "_putchar\n";

  while (i <= 9)
    {
      c = s[i];
      -putchar(c);
      i++;
    }
  return (0);
}
