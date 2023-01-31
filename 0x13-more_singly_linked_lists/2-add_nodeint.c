#include "lists.h"
/**
 * add_nodeint - adds a new npde at the beginning
 * @head: a pointer to the add
 * @n: the interger for the new node
 * Return: if the function fils NULL otherwise add of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
