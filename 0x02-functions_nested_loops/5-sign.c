#include "main.h"

/**
  * print_sign - prints the signs of numbers
  *
  * @n: the integer allowed in the parameters
  * Return: returns a sign as per the condition
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
