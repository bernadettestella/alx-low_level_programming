#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: a pointer to the bits being checked
  * @index: the index of the bit being set
  *
  * Return: returns an integer upon success or an error
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	new = 1 << index;

	*n = *n | new;

	return (1);
}
