#include "main.h"

/**
  * flip_bits - indicates the number of bits required to flip numbers
  * @n: the number to flip from
  * @m: the number to flip to
  *
  * Return: returns the number of flips required
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current, next;
	unsigned int x, count;

	current = n ^ m;
	next = 1;
	count = 0;

	for (x = 0; x < (sizeof(unsigned long int) * 8); x++)
	{
		if (next == (current & next))
			count++;

		next <<= 1;

	}

	return (count);
}
