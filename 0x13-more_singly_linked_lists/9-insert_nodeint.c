#include "lists.h"
/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	for (i = 0; ((i + 1) < idx || temp == NULL); i++)
	{
		temp = temp->next;
	}
	if ((i + 1) < idx)
		return (NULL);
	new->next = temp->next;
	temp->next = new;
	return (new);
}
