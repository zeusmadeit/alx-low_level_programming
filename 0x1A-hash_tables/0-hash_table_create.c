#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the hash table to create
 *
 * Return: returns a new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    hash_node_t **array;

    ht = malloc(sizeof(hash_table_t));
    if(ht == NULL)
    {
        return(NULL);
    }
    array = malloc(sizeof(hash_node_t *) * size);

    ht->size = size;
    ht->array = array;
    return (ht);
}