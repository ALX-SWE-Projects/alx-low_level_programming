#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 * Return: a pointer to the hash table or Null on error
*/
hash_table_t *hash_table_create(unsigned long int size)
{
if (size > 0)
{
hash_table_t *table = malloc(sizeof(hash_table_t));
table->size = size;
table->array = malloc(size * sizeof(hash_node_t));

return (table);
}
else
{
return (NULL);
}
}
