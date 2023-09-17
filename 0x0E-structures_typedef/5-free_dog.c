#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free memory allocated for a dog structure
 * @d: pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	// Free the dynamically allocated name and owner strings.
	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	// Free the dog structure itself.
	free(d);
}
