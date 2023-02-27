#include "main.h"

/**
  * swap_int - swaps the values of two integers
  *
  * @a: the first variable set
  * @b: the second variable set
  *
  * Return: no return value since it is a void function
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
