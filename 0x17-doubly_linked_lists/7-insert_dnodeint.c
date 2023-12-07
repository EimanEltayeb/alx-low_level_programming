#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at a given position
 * @h: header pointer.
 * @idx: new node position
 * @n: data of the node
 * Return: address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t temp;

	
