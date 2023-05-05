#include "main.h"

/**
  * get_bit - gives the value of a bit at a given index
  * @n: the value of the bit
  * @index: the begining of the index
  *
  * Return: returns the value of the bit upon success
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	val = (n >> index) & 1;

	return (val);

}
