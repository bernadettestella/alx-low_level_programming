#include "main.h"

/**
  * flip_bits - indicates the number of bits required
  * @n: one of the integers to be flipped
  * @m: the number that n will flip to
  *
  * Return: returns an unsigned integer
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, y;
	unsigned long int flips, num;

	flips = n ^ m;
	num = 1;
	x = 0;

	for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
	{
		if (num == (flips & num))
			x++;

		num <<= 1;
	}
	return (x);
}
