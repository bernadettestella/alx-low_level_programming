#include "main.h"
#include <stdlib.h>

/**
  * binary_to_uint - converts a binary number to an unsigned integer
  * @b: a pointer to a string of 0 and 1
  *
  * Return: returns an integer or 0
  */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int f;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}

		j = j << 1;

		if (b[j] == '1')
		{
			f += 1;
		}
	}

	return (f);
}
