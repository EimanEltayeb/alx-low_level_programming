#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: header pointer of the list
 * Return: No. of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t copy;
	dlistint_t *temp;
	int count = 0;

	if (h == NULL)
		return (count);
	copy = *h;
	temp = &copy;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
