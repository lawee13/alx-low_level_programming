#include "main.h"

/**
 * print_most_numbers - print num from 0-9
 * do not print 2 and 4
 * Return: no return
 */
void print_most_number(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (!(c == '2' || c == '4'))
		_putchar(c);
	}
		_putchar('\n');
}
