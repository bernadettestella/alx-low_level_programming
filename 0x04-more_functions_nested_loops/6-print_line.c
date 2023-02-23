#include "main.h"

/**
  * print_line - prints a line if the conditions are met
  *
  * @n: parameter to be used
  * Return: returns no value
  */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
