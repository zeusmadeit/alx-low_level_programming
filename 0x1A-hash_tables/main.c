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

    s = "cisfun";
    ht = hash_table_create(1024);
    
    printf("HashTable address: %p\n", (void *)ht);
    printf("Size of array: %lu\n", ht->size);
    printf("\n");
    printf("\n");

    printf("%s => hash: %lu, key: %lu\n", s, hash_djb2((unsigned char *)s), key_index((unsigned char *)s, ht->size));
    
    s = "Don't forget to tweet today";
    printf("%s => hash: %lu, key: %lu\n", s, hash_djb2((unsigned char *)s), key_index((unsigned char *)s, ht->size));
    
    s = "98";
    printf("%s => hash: %lu, key: %lu\n", s, hash_djb2((unsigned char *)s), key_index((unsigned char *)s, ht->size));
    return (EXIT_SUCCESS);
}