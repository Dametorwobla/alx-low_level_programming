#include "main.h"

/**
 * print_numbers - a function that prints the numbers, 0-9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
