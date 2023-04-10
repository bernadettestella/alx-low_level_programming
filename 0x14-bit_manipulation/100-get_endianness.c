#include "main.h"

/**
  * get_endianness - checks the endianness
  *
  * Return: returns a zero or a 1
  */

int get_endianness(void)
{
	int j;
	char *x;

	x = (char *)&j;

	return (*x);
}
