#include <stdio.h>

/**
  * main - displays the alphabet in lowercase
  *
  * Return: return zero if successful
  */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
