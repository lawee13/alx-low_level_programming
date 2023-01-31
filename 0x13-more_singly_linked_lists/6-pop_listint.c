#include "lists.h"

/**
 * pop_listint - deletes and returns the head nodes data
 * @head: this is my struct
 * Return: return to head nodes data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *phead;
	int result;

	if (*head == NULL)
		return (0);
	result = (*head)->n;
	phead - *head;
	*head = (*head)->next;
	free(phead);
	return (result);
}
