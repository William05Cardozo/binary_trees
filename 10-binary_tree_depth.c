#include "binary_trees.h"

/**
 * binary_tree_depth - Function we use for calculate the depth
 * @tree: Is a pointer to the node to measure the depth
 * Return: The depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
