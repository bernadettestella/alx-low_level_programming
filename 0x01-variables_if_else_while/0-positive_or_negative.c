#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - assigns a new number each time the variable is executed

  *Return: Always returns zero if successful
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
