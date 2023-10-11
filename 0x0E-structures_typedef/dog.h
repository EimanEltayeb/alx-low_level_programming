#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog info
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
