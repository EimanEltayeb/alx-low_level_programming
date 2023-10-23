#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: header pointer
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h!= NULL)
	{
		count++;
		h = h->next;
	}
	return(count);
}
