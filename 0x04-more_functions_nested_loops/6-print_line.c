#include "main.h"
/**
 * print_line - prints line in the terminal
 *
 * @n: times straight line printed
 * Return: (0) Always
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
