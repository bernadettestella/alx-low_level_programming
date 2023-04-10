#include "main.h"

/**
  * clear_bit - sets the value of a bit to zero at a specified index
  * @n: the value of the bit
  * @index: the index value of the bit
  *
  * Return: returns an integer
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	x = ~(1 << index);

	*n = *n & x;

	return (1);
}
