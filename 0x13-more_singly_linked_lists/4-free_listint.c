#include "lists.h"
/**
 * free_listint - free nodes and list
 * @head: this is my struct
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
