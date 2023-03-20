#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - is an struct that keeps info about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: the name of the dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/*function prototypes*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
