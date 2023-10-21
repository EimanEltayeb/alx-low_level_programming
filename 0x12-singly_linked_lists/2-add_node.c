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
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (!strdup(str))
		free(new);
	new->next = (*head);
	(*head) = new;
	return (*head);
}

