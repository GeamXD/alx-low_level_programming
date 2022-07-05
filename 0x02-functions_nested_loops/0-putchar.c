#include "main.h"

/**
  *main - prints out _putchar
  *
  *Return: 0 if successful
  */
int main(void)
{
	char i[8] = "_putchar";
	int j;

	for (j = 0; j < 9; j++)
	{
		_putchar(i[j]);
	}
	_putchar(10);
	return (0);
}
