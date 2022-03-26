#include "binary_trees.h"

/**
 * binary_tree_uncle - Function to search the uncles in tree
 * @node: Pointer to parent
 * Return Number of uncles
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
