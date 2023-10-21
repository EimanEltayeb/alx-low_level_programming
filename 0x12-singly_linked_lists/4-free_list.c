#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *temp;
	
	temp = head->next;
	while (temp != NULL)
	{
		free (head);
		head = temp;
		temp = head->next;
	}
}		
