#include "hash_tables.h"

/**
 * main - Driver code
 *
 * Return: EXIT_SUCCESS
 */
int main()
{
    char *s;
    hash_table_t *ht;

    s = "James";
    ht = hash_table_create(100);
    ht != NULL ? printf("hash table created\n") : printf("failed to create hash table\n");
    
    printf("HashTable address: %p\n", (void *)ht);
    printf("Size of array: %lu\n", ht->size);
    printf("\n");
    printf("\n");

    printf("%s => hash: %lu, key: %lu\n", s, hash_djb2((unsigned char *)s), key_index((unsigned char *)s, ht->size));
    
    s = "cisfun";
    printf("%s => hash: %lu, key: %lu\n", s, hash_djb2((unsigned char *)s), key_index((unsigned char *)s, ht->size));
    
    s = "Nasty by nature";
    printf("%s => hash: %lu, key: %lu\n", s, hash_djb2((unsigned char *)s), key_index((unsigned char *)s, ht->size));
    
    s = "Nasty by naturee";
    printf("%s => hash: %lu, key: %lu\n", s, hash_djb2((unsigned char *)s), key_index((unsigned char *)s, ht->size));
    return (EXIT_SUCCESS);
}