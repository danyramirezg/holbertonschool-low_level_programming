#include <stdlib.h>
#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize struct dog.
  * @d: name of struct
  * @name: name of dog in struct
  * @age: age of dog in struct
  * @owner: name of owner of dog in struct
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if(d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	
	else

		printf("Name: %s\n", d->name);
	
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
