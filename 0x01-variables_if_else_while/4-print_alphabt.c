#include <stdio.h>

/**
  * main - prints the alphabet excluding some specific characters
  *
  * Return: returns zero if successful
  */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
