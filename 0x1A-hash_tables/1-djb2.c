#include "hash_tables.h"
/**
 * hash_djb2 - function for hash table
 * @str:str
 * Return:it returns hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ha;
	int ch;

	ha = 5381;
	while ((ch = *str++))
		ha = ((ha << 5) + ha) + ch;

	return (ha);
}
