#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index.
 * @head: pointer
 * @index: index of the node to be deleted
 * Retern: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 1;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		temp = (*head)->next;
		temp->prev = NULL;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = (*head)->next;
	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		else
		{
			i++;
			temp = temp->next;
		}
	}
	return (-1);
}
