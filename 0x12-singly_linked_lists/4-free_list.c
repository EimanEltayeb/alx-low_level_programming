#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: pointer
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
	}
	free(head);
}
