#include "main.h"

/**
  * _isalpha - checks for the alphabet either uppercase or lowercase
  *
  * @c: the integer allowed in the paramenters
  * Return: return zero or one depending on the condition
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
