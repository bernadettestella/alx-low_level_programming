#include "main.h"

/**
  * get_endianness - checks endiannes
  *
  * Return: returns 0 if big else returns 1
  */

int get_endianness(void)
{
	int num = 1;
	char *z;

	z = (char *)&num;

	return (*z);

}
