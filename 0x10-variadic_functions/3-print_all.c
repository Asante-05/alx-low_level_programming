#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list vlist;
	unsigned int i = 0, j = 0, c = 0;
	char *string;
	const char input_format[] = "cifs";

	va_start(vlist, format);
	while (format && format[i])
	{
		while (input_format[j])
		{
			if (format[i] == input_format[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vlist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(vlist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(vlist, double)), c = 1;
				break;
			case 's':
				string = va_arg(vlist, char *), c = 1;
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		} i++;
	}
	va_end(vlist);
	printf("\n");
}
