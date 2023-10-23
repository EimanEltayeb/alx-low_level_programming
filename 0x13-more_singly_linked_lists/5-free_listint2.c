#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	if (head != NULL)
	{
		temp2 = *head;
		while (temp2 != NULL)
		{
			temp = temp2->next;
			free(temp2);
			temp2 = temp;
		}
		*head = NULL;
	}
}
