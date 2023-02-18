#include <stdio.h>

/**
  * main - prints the alphabet in lowercase and uppercase
  *
  * Return: returns zero if successful
  */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
