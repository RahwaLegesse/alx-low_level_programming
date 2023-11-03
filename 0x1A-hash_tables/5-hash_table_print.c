#include "hash_tables.h"
/**
 * hash_table_print - function
 * @ht:pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int j;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (flag == 1)
				printf(", ");

			n = ht->array[j];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
