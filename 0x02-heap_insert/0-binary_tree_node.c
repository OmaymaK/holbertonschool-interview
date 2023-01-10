#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: the pointer to the parent node
 * @value: the value of the new node
 * Return: New node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);
	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->n = value;
	return (tmp);
}
