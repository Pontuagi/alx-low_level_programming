#include <stdio.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: return NUll or New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog_name;
	char *dog_owner;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	dog_name = strdup(name);
	new_dog->name = strdup(dog_name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(dog_name);
		return (NULL);
	}

	dog_owner = strdup(owner);
	new_dog->owner = strdup(dog_owner);

	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	free(dog_owner);

	return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
