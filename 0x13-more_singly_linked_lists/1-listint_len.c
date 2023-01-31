#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Return the number of elements
 * @h: a ppointer to the head
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
