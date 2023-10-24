#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: poointer
 * @index: index
 * Return: n.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t temp1, temp2;
	unsigned int x;
	int m;

	temp1 = *head;
	for (x = 0; x < index; x++;)
	{
		temp1 = temp1->next;
		temp2 = temp1;
	}
	m = temp1->n;
	
