#include <stdio.h>

/**
  * main - print triple digits
  * Return: prints zero if successful
  */

int main(void)
{
	int i;
	int j;
	int e;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (e = 2 ; e < 10 ; e++)
			{
				if (i < j && j < e)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(e + '0');
					if (i + j + e != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
