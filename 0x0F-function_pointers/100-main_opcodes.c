#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcode of the main function
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: (0) on success..
 */
int main(int argc, char *argv[])
{
	char *op = (char *) main;
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02x", op[i] & 0xFF);
		if (i != n - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
