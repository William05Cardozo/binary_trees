#include "binary_trees.h"

/**
 * binary_tree_leaves - Function we use for calculate number of leaves
 * @tree: Pointer to parent node
 * nleft: Varaible
 * nright: Variable
 * Return: Number ofleaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nleft = 0, nright = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	nleft = binary_tree_leaves(tree->left);
	nright = binary_tree_leaves(tree->right);

	return (nleft + nright);
}
