#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @key: key to calculate index from.
 * @value: value to be saved
 *
 * Return: returns 1 upon success or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *head;
    hash_node_t *temp;
    char *s;
    unsigned long int index;

    strcpy(s, value);
    index = key_index(key, ht->size);
    temp = malloc(sizeof(hash_node_t));
    if(temp == NULL)
    {
        return(0);
    }

    if(ht->array[index] == NULL)
    {
        temp->key = key;
        temp->value = value;
        temp->next = NULL;
        ht->array[index] = temp;
    }
    else
    {
        head = ht->array[index];
        if(!(has_key(head, key))) // check if key exist at index
        {
            while (ht->array[index]->next != NULL)
            {
                ht->array[index] = ht->array[index]->next;
            }
            temp->key = key;
            temp->value = value;
            temp->next = NULL;
            ht->array[index]->next = temp;
        }
    }

    free(temp);
    return(1);
}

/**
 * has_key - checks if the given index already has a node with the given key
 *
 * @head: the linked list to traverse
 * @index: the given index
 * @key: key to calculate index from.
 *
 * Return: returns 1 if it exist or 0 if it doesnt
 */
int has_key(hash_node_t *head, const char *key)
{
    while (head != NULL)
    {
        if(strcmp(head->key, key) == 0)
        {
            return(1);
        }
    }
    return(0);
    
}