#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initialize dog
  * @d: initialize dog
  * @name: initialize name
  * @age: intialize age
  * @owner: initialize owner
  *
  * Return: d
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
