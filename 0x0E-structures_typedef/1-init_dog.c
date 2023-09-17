#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * init_dog - initialize dog
  * @d: initialize dog
  * @name: initialize name
  * @age: intialize age
  * @owner: initialize owner
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
