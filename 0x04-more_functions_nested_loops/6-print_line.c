#include "main.h"
/**
 * print_line - prints line in the terminal
 *
 * Return: (0) Always
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
