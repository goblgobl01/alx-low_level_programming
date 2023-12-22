#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((unsigned char *)key, 1024);

    hash_node_t* new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->key = (char*)key;
    new_node->value = (char*)value;
    new_node->next = NULL;

    if(ht->array[index] == NULL)
    {
        ht->array[index] = new_node;
    }

    else
    {
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
    }

    printf("key: %s\n",ht->array[index]->key);
    printf("value: %s\n",ht->array[index]->value);
    return (1);
}