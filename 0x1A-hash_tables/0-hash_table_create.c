#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_table.h"

/**
 * hash_table_create -  creates a hash table
 * @size: size of array
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hasht = NULL;
	hash_node_t **arr = NULL;

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (; i < size; ++i)
		arr[i] = NULL;

	hasht->size = size;
	hasht->array = arr;

	return (hasht);
}
