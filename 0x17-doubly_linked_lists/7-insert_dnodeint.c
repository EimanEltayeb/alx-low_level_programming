#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at a given position
 * @h: header pointer.
 * @idx: new node position
 * @n: data of the node
 * Return: address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (temp == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		else
			return (NULL);
	}
	while (temp != NULL)
	{
		if (i == idx)
		{
			if (temp->prev != NULL)
			{
				temp->prev->next = new;
				new->prev = temp->prev;
			}
			temp->prev = new;
			new->next = temp;
			return (new);
		}
		i++;
		temp = temp->next; }
	}
	return (NULL); }
