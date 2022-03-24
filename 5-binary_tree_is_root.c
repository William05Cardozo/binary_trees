#include "binary_trees.h"

/**
 * binary_tree_is_root - Function search a node is root
 * @node: Is a pointer to the node to check
 * Return: Node is root or not
 **/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->left && node->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
