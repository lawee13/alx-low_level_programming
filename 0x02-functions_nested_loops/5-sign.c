#include "main.h"
/**
 * print_sign - prnt the sign of a number
 * @n: the number to check
 * Return: 0 or ortherwise 1
*/
int print_sign(int n)
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
_putchar('-1');
return (-1);
}
