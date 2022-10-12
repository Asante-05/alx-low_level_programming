#include "3-calc.h"
/**
 *op_add - adds two variables
 *@a: first paramemter
 *@b: second paramemter
 *Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtracts two variables
 *@a: first paramemter
 *@b: second paramemter
 *Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two variables
 *@a: first paramemter
 *@b: second paramemter
 *Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - adivides two variables
 *@a: first paramemter
 *@b: second paramemter
 *Return: the results of a divided by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}
/**
 *op_mod - gives the modulo of two variables
 *@a: first paramemter
 *@b: second paramemter
 *Return: the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
