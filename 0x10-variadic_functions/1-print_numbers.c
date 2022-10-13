#include "variadic_functions.h"
/**
 * print_numbers - prints numbers separated by a char
 * @separator: character to separate numbers
 * @n: number of arguments
 * Return: (void) nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vlist, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	va_end(vlist);

	printf("\n");
}
