#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a stuct that creates the dog informatio
 * @name: this is the name of the dog
 * @age: this is the age of the dog
 * @owner: this is the owner of the dog
 * Description: initial struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
