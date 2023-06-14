#include "hash_tables.h"

/**
 * hash_table_print - function that prints all the elements of a hash table
 * @ht: pointer to hash table
 *
 * Return: return nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *node;
	int first_pr = 0;

	if (ht == NULL)
		return;

	printf("{");
	for(i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first_pr)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_pr = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
