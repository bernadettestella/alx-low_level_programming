#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int h;

	hash = 5381;
	while ((h = *str++))
	{
		hash = ((hash << 5) + hash) + h; /* hash * 33 + h */
	}
	return (hash);
}
