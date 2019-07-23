#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Description about the dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The owner's dog
 *
 * Description: Struct dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);


#endif
