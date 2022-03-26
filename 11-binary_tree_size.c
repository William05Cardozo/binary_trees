#include "binary_trees.h"

/**
 * binary_tree_size - Function we use for calculate the size
 * @tree: Is a pointer to the root node
 * Return: Size of node
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t nsize;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	nsize = binary_tree_size(tree->left) + 1;
	nsize += binary_tree_size(tree->right);

	return (nsize);
}
