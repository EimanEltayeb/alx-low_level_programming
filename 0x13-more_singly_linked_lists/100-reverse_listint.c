#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: pointer
 * Return: ponter to new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	temp1 = (*head)->next;
	(*head)->next = NULL;
	temp2 = temp1->next;
	while (temp2 != NULL)
	{
		temp1->next = (*head);
		(*head) = temp1;
		temp1 = temp2;
		temp2 = temp1->next;
	}
	temp1->next = (*head);
	(*head) = temp1;
	return (*head);
}
