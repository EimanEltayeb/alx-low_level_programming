#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: poointer
 * @index: index
 * Return: n.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int x;

	temp1 = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
	}
	else
	{
		for (x = 0; (x < index || temp1 == NULL); x++)
		{
			temp2 = temp1;
			temp1 = temp1->next;
		}
		if (x < index)
			return (-1);
		temp2->next = temp1->next;
		free(temp1);
	}
	return (1);
}		
