#include "hash_tables.h"
/**
 * key_index - Give the index of the key-value pair
 * @key: The key of which the index should be gotten from
 * @size: The size of the array
 * Return: The index of the key
 * Description: It uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
