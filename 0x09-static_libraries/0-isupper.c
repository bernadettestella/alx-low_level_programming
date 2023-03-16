#include "main.h"
#include <stdio.h>

/**
  * _isupper - checks for uppercase letters
  *
  * @c: the parameter to be checked
  * Return: returns one if the parameter is uppercase and else zero
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
