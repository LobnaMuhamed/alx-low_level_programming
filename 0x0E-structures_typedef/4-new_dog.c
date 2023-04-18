#include "dog.h"

/**
 * cpy - a function copy string to another
 * @to: input value
 * @from: input value
 * Return: return value
*/
char *cpy(char to, char from)
{
	int x, y;

	x = 0;
	y = 0;
	while (from[x] != '\0')
		x++;
	for (; y <= x ; y++)
		to[y] = from[y];
	to[y] = '\0';
	return (to);
}
/**
 * len - a function calculate length
 * @ch: input valeu
 * Return: return value
*/
int *len(char *ch)
{
	int x;

	x = 0;
	while (ch[x] != '\0')
		x++;
	return (x);
}
/**
 * *new_dog - a function create new dog
 * @name: input value
 * @age: input value
 * @owner: input value
 * Return: return valeu
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog *dog;

	int x, y;

	x = len(name);
	y = len(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (x + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (y + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	cpy(dog->name, name);
	cpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
