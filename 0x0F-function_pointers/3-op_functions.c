#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first int
 * @b: second int
 * Return: result of dividing a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo two integers
 * @a: first int
 * @b: second int
 * Return: remainder when a is divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
