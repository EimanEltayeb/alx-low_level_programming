#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		temp = head->next;
		if (temp == NULL)
			free(head);
		while (temp->next != NULL)
		{
			free(temp->prev);
			temp = temp->next;
		}
		free(temp);

	}
}
