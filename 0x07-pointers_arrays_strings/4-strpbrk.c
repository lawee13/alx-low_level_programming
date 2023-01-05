#include "main.h"
/**
 * *strpbrk - entry point
 * *@s: input 
 * *@accept: input
 * *Return: alwaye o success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if(*s == accept[k])
			return (*s);
		}
		s++;
	}
	return ('\0');
}
