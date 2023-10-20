#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginnign of a list
 * @head: pointer of pointer.
 * @str: string
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;
	free (new);
	return (*head);
}

