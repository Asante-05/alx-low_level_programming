#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - function to create new dog
  * @name: name of dog (member of struct)
  * @age: age of dog (member of struct)
  * @owner: owner of dog (member of struct)
  * Return: ptr_dog(struct)
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int i, dname, downer;


	ptr_dog = malloc(sizeof(*ptr_dog));

	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;
	for (downer = 0; owner[downer]; downer++)
		;

	ptr_dog->name = malloc(dname + 1);
	ptr_dog->owner = malloc(downer + 1);

	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog->owner);
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	for (i = 0; i < dname; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[i] = '\0';

	ptr_dog->age = age;

	for (i = 0; i < downer; i++)
		ptr_dog->owner[i] = owner[i];
	ptr_dog->owner[i] = '\0';

	return (ptr_dog);
}



