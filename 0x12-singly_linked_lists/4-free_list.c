#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *temp1, *temp2;

	temp1 = head;
	while (temp1 != NULL)	
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
}
