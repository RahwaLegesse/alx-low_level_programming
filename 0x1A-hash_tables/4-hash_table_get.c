#include "hash_tables.h"
/**
 * hash_table_get - function
 * @ht:pointer
 * @key:key
 * Return:return the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	n = ht->array[indx];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((n == NULL) ? NULL : n->value);
}
