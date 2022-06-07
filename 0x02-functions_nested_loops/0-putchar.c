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
  char s[] = "_putchar";
  int i = 0;

  while (s[i] != '\0')
    {
      -putchar(s[i]);
      i++;
    }
  _putchar(10);
  
  return (0);
}
