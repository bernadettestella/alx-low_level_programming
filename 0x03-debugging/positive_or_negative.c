#include "main.h"

/**
  * positive_or_negative - tests whether a number is positive or negative
  *
  * @i: the number to be tested
  * Return: returns zero
  */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i >= 0)
		printf("%d is positive\n", i);
}
