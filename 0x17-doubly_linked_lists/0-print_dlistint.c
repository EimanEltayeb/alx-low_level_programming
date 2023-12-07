#include "lists.h"
/**
 * print_dlistint - prints elements of dlistint_t
 * @h: header pointer of the list
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t copy = *h;
	dlistint_t *temp = &copy;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
