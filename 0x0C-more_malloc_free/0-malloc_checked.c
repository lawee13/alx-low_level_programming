#include "main.h"
/**
 * malloc_checked - cause normal process termination
 * @b: allocated memory
 * Return: pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
