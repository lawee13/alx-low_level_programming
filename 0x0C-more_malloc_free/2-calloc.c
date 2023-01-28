#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory wuth a constatnt byte
 * @s: memory area to be filled
 * @b: char to be copy
 * @n: number of times to copy b
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc -a allocates memory for an array
 * @nmemb: number of elemens in the array
 * @size: size of each element
 * Return:pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

		_memset(ptr, 0, nmemb * size);
		return (ptr);
}
