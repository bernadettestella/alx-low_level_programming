#include "main.h"

/**
  * clear_bit - sets the vlue of a bit to 0 at a given index
  * @n: a pointer to the bit
  * @index: the index from where the value will be set
  *
  * Return: returns 1 if successful else -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	clear = ~(1 << index);

	*n = *n & clear;

	return (1);

}
