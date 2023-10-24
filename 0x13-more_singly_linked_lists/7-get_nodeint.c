#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head:pointer
 * @index: index
 * Return: n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	for (i = 0; (i < index && temp != NULL); i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || i < index)
		return (NULL);
	return (temp);
}
