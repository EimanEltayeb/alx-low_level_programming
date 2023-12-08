#include "lists.h"
/**
 * print_dlistint - prints elements of dlistint_t
 * @h: header pointer of the list
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t copy;
	dlistint_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (count);
	copy = *h;
	temp = &copy;
	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
