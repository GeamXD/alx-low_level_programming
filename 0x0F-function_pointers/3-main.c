#include "3-calc.h"

/**
 * main - calculates
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if successful
 */
int main(int argc, int **argv)
{
	int (*f)(int a, int b);
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
