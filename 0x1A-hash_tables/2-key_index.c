#include "hash_tables.h"
/**
 * key_index - Gets index of key using hash_djb2
 * @key: The key
 * @size: size table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
