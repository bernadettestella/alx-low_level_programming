#include "main.h"
#include <stdlib.h>

/**
  * binary_to_uint - converts a binary number to an unsigned integer
  * @b: points to a string
  *
  * Return: returns an integer
  */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int f;

	f = 0;

	if (!b)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		f <<= 1;
		if (b[j] == '1')
			f += 1;
	}

	return (f);
}
