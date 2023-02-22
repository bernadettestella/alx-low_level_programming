#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints the number given butnonly upto 98
  *
  * @n: the parameter allowed
  *
  * Return: returns the number required
  */

void print_to_98(int n)
{
	int j;

	if (n >= 0 && n <= 98)
	{
		for (j = n ; j <= 98 ; j++)
		{
			printf("%d, ", j);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (j = n ; j <= 98 ; j++)
		{
			printf("%d, ", j);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (j = n ; j >= 98 ; j--)
		{
			printf("%d, ", j);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d, ", n);
}
