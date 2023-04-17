#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog info
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: Longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
