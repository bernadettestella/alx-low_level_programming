#include <stdio.h>

/**
  * main - prits single digits
  *
  * Return: always zero if successful
  */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
