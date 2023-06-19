#include "main.h"

/**
  * _islower - checks the lowercase characters
  *
  * @c: the integer in the parameter
  * Return: returns zero or one depending on the condition
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
