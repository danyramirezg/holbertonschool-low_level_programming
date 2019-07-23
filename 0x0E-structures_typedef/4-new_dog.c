#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The owner's dog
 *
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, len;
dog_t *newDog;

	j = len = 0;
	while (name[len++])
		;
	while (owner[j++])
		;
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(len * sizeof(newDog->name));
	if (newDog == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		newDog->name[i] = name[i];

	newDog->age = age;

	newDog->owner = malloc(j * sizeof(newDog->owner));
	if (newDog == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		newDog->owner[i] = owner[i];
	return (newDog);
}
