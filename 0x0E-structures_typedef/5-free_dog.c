#include <stdlib.h>
#include "main.h"

/**
 * free_dog -  a function that frees dogs.
 * @d: a pointer of struct
*/

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->owner);
	free(d->name);
	free(d->age);
	free(d);
	}
}
