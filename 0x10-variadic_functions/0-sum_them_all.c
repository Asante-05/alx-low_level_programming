#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of any number of arguments
 * @n: number of argumnts:
 * Return: the sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list dnc_list;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(dnc_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(dnc_list, int);

	va_end(dnc_list);

	return (sum);
}
