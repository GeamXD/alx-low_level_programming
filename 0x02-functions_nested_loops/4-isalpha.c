#include "main.h"

/**
  *_isalpha - checks for letters, upper and lowercase
  *@c: character to be checked
  *Return: 1 if an alphabet, 0 if not
  */
int _isalpha(int c)
{
	if (c >= 97 && c < 122)
		return (1);
	else if (c >= 65 && c < 90)
		return (1);
	else
		return (0);
}
