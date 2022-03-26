#include "binary_trees.h"

/**
 * binary_tree_height - Function we using for calculate height of the tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * nright: Variable
 * nleft: Variable
 * Return: Height or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t nright, nleft;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	nleft = binary_tree_height(tree->left) + 1;
	nright = binary_tree_height(tree->right) + 1;

	if (nleft > nright)
		return (nleft);
	else
		return (nright);
}
