#include "lists.h"
/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: pointer
 * @idx: index
 * @n: n
 * Return: pointer to  new node
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
	new->next = NULL;
	if (n == 0)
	{
		if (*head == NULL)
			*head = new;
		else
		{
			new->next = *head;
			*head = new;
		}
	}
	for (i = 0; (i < (idx - 1) && temp != NULL); i++)
	{
		temp = temp->next;
	}
	if (i < (idx - 1))
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
