#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - frees the memory allocated in the struct.
  * @d: pointer to struct
  * Return: Nothing
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
