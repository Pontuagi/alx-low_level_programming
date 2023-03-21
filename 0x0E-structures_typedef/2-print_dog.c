#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - print dog elements
  * @d: elements stored.
  */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d.name);
	printf("Age: %6f\n", d.age);
	printf("Owner: %s\n", d.owner);
}
