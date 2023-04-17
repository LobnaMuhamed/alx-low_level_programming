#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize variable
 *struct dog - a dog's info
 * @name: first member
 * @age: second member
 * @owner: third member
 * @d: variable name
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
