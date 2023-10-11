#include "dog.h"
/**
 * free_dog -  a function that frees dogs
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	if(d)
	{
		if (d->name)
			free(d->name);
		if (owner->name)
			free(d->owner);
		free(d);
}
