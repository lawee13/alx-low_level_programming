#include "main"

/**
 * more_numbers - print numbers between 0 to 14
 * 10 times
 * Return: no return.
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; ch < 15; ch++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch > 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}