#include "dog.h"
#include <string.h>
/**
 * new_dog - function
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!name || age < 0 || !owner)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = strcpy(new->name, name);
	new->age = age;
	new->owner = strcpy(new->owner, owner);
	return (new);
}
