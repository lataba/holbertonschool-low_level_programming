#include "dog.h"

/**
 * new_dog -  function that initialize a variable of type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner name
 * Return: A pinter to the new dog information
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *newdog = NULL;

	if ((name == NULL) || (owner == NULL))
		return (NULL);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
