#include "main.h"

/**
  *_abs - prints abs value
  *@c: num being tested
  *
  *Return: 0 if successful
  */
int _abs(int c)
{

	if (c < 0)
		return ((-1 * c));
	else
		return (c);
}
