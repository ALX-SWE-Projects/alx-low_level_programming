#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if success otherwise 0 if failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
int index;
hash_node_t *node;
hash_node_t *current_node;

node = create_node((char *)key, (char *)value);
if (node == NULL)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
current_node = ht->array[index];

if (current_node == NULL)
{
ht->array[index] = node;
}
else
{
node->next = current_node;
ht->array[index] = node;
}
return (1);
}

/**
 * create_node - creates a new node
 *
 * @key: the key
 * @value: the value
 * Return: returns the new node
*/
hash_node_t *create_node(char *key, char *value)
{
hash_node_t *node = malloc(sizeof(hash_node_t));
node->key = malloc(strlen(key) + 1);
node->value = malloc(strlen(value) + 1);
strcpy(node->key, key);
strcpy(node->value, value);
return (node);
}
