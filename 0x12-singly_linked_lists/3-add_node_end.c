#include "lists.h"
/**
 * add_node_end - dds a new node at the end of a list
 * @head: pointer
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *new2;

	if (head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
		return (NULL);

	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (!strdup(str))
		free(new);
	new->len = strlen(str);
	while (head != NULL)
	{
		
		if (*head == NULL)
		{
			head = new;
			head->next = NULL;
		else
		{
			*head = new;
			*head->next = NULL;
		}
	return (*head);
}
