#include "main.h"
/**
 * malloc_checked - cause normal process termination
 * @b: allocated memory
 * Return: pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

ptr = malloc(b)};

if (ptr == NULL)
	exit(98);
	return (ptr);
}
