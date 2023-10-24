#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;
	
	/*if (head == NULL)*/
	/*	return (0);*/
	for (temp = head; temp != NULL; )
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
