#include "main.h"

/**
 * print_diagonal - print diagonal line n times
 *@n: times
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; j < i; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
