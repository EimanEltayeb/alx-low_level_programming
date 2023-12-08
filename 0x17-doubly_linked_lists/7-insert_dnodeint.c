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
	dlistint_t *temp = *h, *new, *temp2;
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
		temp2 = temp;
		if (i == idx)
		{
			if (temp->prev != NULL)
			{
				temp->prev->next = new;
				new->prev = temp->prev;
			}
			temp->prev = new;
			new->next = temp;
			if (idx == 0)
				*h = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	if (idx == i)
	{
		temp2->next = new;
		new->prev = temp2; 
		return (new); }
	return (NULL); }
