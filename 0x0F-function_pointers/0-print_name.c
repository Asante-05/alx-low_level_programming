#include "function_pointers.h"

/**
 * print_name - passes a name to a print function
 * @name: pointer paramemter of function
 * @f: pointer to function parameter
 * Return: void (nothing)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
