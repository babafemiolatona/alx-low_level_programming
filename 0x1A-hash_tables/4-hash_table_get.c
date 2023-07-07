#include "hash_tables.h"

char* hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *entry;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	
	index = key_index((const unsigned char*)key, ht->size);
	
	entry = ht->array[index];

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			return (entry->value);
		}
		entry = entry->next;
	}
	return (NULL);
}
