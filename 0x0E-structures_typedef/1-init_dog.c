#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a var of type struct dog
 * @d: The struct's name
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The owner's dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
