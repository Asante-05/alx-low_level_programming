#include "dog.h"

/**
 * init_dog - initilizes a varible of type struct dog.
 * @d: struct dog.
 * @name: member of struct dog
 * @age: member of struct dog
 * @owner: member of struct dog
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

