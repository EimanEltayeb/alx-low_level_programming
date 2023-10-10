#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: struct dog pointer
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
