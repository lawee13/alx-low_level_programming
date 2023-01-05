#include "main.h"
/**
 * *_memcpy - a function that copues memory area
 * *@dest: where the memory add is stored
 * *@src: source memory add
 * *@n: nun of byte
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++;)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
