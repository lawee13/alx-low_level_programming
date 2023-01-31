#include "lists.h"
/**
 * free_listint - free nodes and list
 * @head: this is my struct
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		listint_t *tmp;

		tmp = head;
		free(tmp);
		head = head->next;
	}
}
