#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head pointer
 * @n: content of the node
 * Return: pointer of hte new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		(*head)->prev = new;
		*head = new;
		return (new);
	}
}
