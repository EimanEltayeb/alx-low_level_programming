#include "lists.h"
/**
 * pop_listint - deletes the head node and returnt its data
 * @head: pointer
 * Return: n of head
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
		return (0);
	new = (**head).next;
	n = (**head).n;
	free(*head);
	*head = new;
	return(n);
}
