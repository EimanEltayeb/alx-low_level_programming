#include "lists.h"
/**
 * add_node_end - dds a new node at the end of a list
 * @head: pointer
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
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
	new->next = NULL;
	return (*head);
}
