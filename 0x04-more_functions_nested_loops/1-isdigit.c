#include "main.h"
/**
 * _isdigit - checks wether a charactoer is a digit
 * @c: variable input
 * Return: (0) Always
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

