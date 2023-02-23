#include "main.h"

/**
  * more_numbers - prints the numbers
  *
  * Return: returns 0
  */

void more_numbers(void)
{
	int j;
	int k;

	for (j = 0 ; j <= 9 ; j++)
	{
		for (k = 0 ; k <= 14 ; k++)
		{
			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
