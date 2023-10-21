#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (temp->next != NULL)
	{
		temp = head->next;
		free (head);
		head = temp->next;
	}
}		
