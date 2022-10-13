#include "variadic_functions.h"

/**
 * print_strings - prints list of strings
 * @separator: char to separate strings
 * @n: number of strings
 * Return: (void) nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *string;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(vlist, char *);

		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("nil");
		}

		if (separator && i != n - 1)
			printf("%s", separator);
	}

	va_end(vlist);

	printf("\n");
}



