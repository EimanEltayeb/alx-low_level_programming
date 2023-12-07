#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: header pointer of the list
 * Return: No. of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t copy = *h;
	dlistint_t *temp = &copy;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
