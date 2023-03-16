#include "main.h"

/**
  * _abs - checks the absolute value of a number
  *
  * @b: parameter to be checked
  * Return: returns the value of the integer
  */
int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
