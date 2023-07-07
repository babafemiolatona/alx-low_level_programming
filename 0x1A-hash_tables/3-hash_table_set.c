#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key, cannot be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_entry;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new_entry = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_entry == NULL)
	{
		return (0);
	}
	new_entry->key = strdup(key);
	if (new_entry->key == NULL)
	{
		free(new_entry);
		return (0);
	}
	new_entry->value = strdup(value);

	if (new_entry->value == NULL)
	{
		free(new_entry->key);
		free(new_entry);
		return (0);
	}
	new_entry->next = ht->array[index];
	ht->array[index] = new_entry;
	return (1);
}
