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
	if (*head == NULL || n == 0)
		*head = new;
	for (i = 0; (i < idx || temp != NULL); i++)
	{
		temp = temp->next;
	}
	if (i < idx)
		return (NULL);
	new->next = temp->next;
	temp->next = new;
	return (new);
}
