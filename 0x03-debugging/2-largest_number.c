#include "main.h"

/**
 * largest_number - return the largest of three numbers
 * @a: the first number
 * @b: the second number
 * @c: the third number
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	
	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	
	return (largest);
}
