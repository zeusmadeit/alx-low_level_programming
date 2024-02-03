#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to generate index 
 * for traversing the hash table
 * @size: size of the hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index;

    index = hash_djb2(key) % size;
    return (index);
}
