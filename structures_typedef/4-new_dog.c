#include "dog.h"
#include <string.h>

/**
 * new_dog - function that initialize a variable of type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner name
 * Return: A pinter to the new dog information
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *newdog = NULL;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = malloc(strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);
	newdog->age = age;
	strcpy(newdog->owner, owner);

	return (newdog);
}
