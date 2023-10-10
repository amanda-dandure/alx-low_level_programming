#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this is the new do struct where the var will be initialized
 * @d: this is the pointer the struct of the new dog
 * @name: this is the name of the new dog
 * @age: this is the age of the new dog
 * @owner: this is the owner of th new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
