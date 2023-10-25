#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head
 * Return: the address of the node where the loop start.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t f_ptr;
	listint_t s_ptr;

	f_ptr = head;
	s_ptr = head;
	while(f_ptr && s_ptr && f_ptr->next)
	{
		s_ptr = s_ptr->next;
		f_ptr = f_ptr->next->next;
		if (s_ptr == f_ptr)
			return (s_ptr);
	}
	return (NULL);
}	
