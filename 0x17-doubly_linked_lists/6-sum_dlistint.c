#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: head pointer
 * Return: sum of all (n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
