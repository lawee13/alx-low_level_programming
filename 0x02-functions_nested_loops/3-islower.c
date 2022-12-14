#include "main.h"
/**
 * _islower - prints if the letter c is lower case or not
 * @c: the variable we check
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
