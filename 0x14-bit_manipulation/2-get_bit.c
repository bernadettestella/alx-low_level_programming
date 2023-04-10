#include "main.h"

/**
  * get_bit - gives the value of a bit at a given index
  * @n: the value of the bit
  * @index: the index where the bit will be checked
  *
  * Return: returns an integer
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);

}
