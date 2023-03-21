#include "dog.h"
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
  * init_dog - initialize dog
  * @d: initialize dog
  * @name: initialize name
  * @age: intialize age
  * @owner: initialize owner
  *
  * Return: d
  */

struct dog;
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
