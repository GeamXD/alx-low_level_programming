#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - prints square-root 
 * @n: parameter 
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return(_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 * Return: a number
 */
int _sqrt(int n, int i)
{
	int squar = i * i;

	if (squar > n)
		return (-1);
	if (squar == n)
		return (i);
	return (_sqrt(n, i + 1));
}
