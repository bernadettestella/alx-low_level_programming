#include "main.h"

/**
  * set_bit - sets the value of a bit to 1
  * @n: pointer to the bit value
  * @index: the index from where the value is set
  *
  * Return: returns a 1 upon success and -1 if an error occurs
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_byte;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	set_byte = 1 << index;

	*n = *n | set_byte;

	return (1);

}
