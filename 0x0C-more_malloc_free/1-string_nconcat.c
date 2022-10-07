#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings into one
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: a pointer to the newly allocatedspace.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptcon;
	unsigned int c1, c2, cfinal, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s3 = "";

	for (c1 = 0; s1[c1] != '\0'; c1++)
		;

	for (c2 = 0; s2[c2] != '\0'; c2++)
		;

	if (n > s2)
		n = s2;

	cfinal = c1 + n;

	ptcon = malloc(cfinal + 1);

	if (cfinal == NULL)
		return (NULL);

	for (i = 0; i < cfinal; i++)
		if (i < c1)
			cfinal[i] = s1[i];
		else
			cfinal[i] = s2[i - c1];

	cfinal[i] = '\0';

	return (cfinal);
}

