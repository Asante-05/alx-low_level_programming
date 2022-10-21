#include <stdio.h>

/**
 * firstmain - function executes before main
 * Return: no return.
 */

void __attribute__ ((constructor)) firstmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
