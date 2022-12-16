#include "main"

/**
 * more_numbers - print numbers between 0 to 14
 * 10 times
 * Return: no return.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 10)
			_putchar('i');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
