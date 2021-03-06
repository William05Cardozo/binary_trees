#include "binary_trees.h"

/**
 * binary_tree_sibling - Function we use to search the broda to node
 * @node: Pointer to parent
 * Return: Number of broda
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
