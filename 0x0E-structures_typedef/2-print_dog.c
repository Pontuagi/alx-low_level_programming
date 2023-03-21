#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - print dog elements
  * @d: elements stored.
  */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
