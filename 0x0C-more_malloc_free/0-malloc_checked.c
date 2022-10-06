#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of bytes
 * Return: a pointer to the allocated memory
 * if amlloc fails, exit status is 98
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
