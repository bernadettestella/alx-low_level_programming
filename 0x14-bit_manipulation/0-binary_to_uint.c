#include "main.h"

/**
  * binary_to_uint - converts a binary to an unsigned integer
  * @b: the binary character to be converted
  *
  * Return: returns the converted number upon success
  */

unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}

	result = 0;

	for (y = 0; b[y] != '\0'; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);

		result = result * 2 + (b[y] - '0');
	}

	return (result);
}
