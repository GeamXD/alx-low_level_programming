#include "main.h"
int check_prime(int, int);
/**
 * is_prime_number -  checks for prime number
 * @n: parameter
 * 	Return: 1 for prime
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks for prime
 * @n: number
 * @i: iterator
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if   (n % i == 0 && i > 1)
		return (0);
	if ((n / 1) < 1)
		return (1);
	return (check_prime(n, i + 1));
}
