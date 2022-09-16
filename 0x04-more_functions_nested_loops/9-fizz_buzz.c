#include <stdio.h>
#include "main.h"
/**
 * main - Program Entry
 *
 * Return: (0) Always
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	printf(" ");
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
