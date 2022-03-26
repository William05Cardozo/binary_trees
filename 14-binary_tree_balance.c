#include "binary_trees.h"

/**
 * binary_tree_height - My function recursive
 * @tree: Pointer to parent
 * nleft: Variable
 * nright: Variable
 * Return: left or right of course aobut result
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t nleft = 0, nright = 0;

	if (tree == NULL)
		return (0);

	nleft = binary_tree_height(tree->left) + 1;
	nright = binary_tree_height(tree->right) + 1;

	if (nleft < nright)
		return (nright);
	else
		return (nleft);
}

/**
 * binary_tree_balance - Function we use to calculate the balance
 * @tree: Pointer to parent
 * Return: Number of balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((int)binary_tree_height(tree->left) -
			(int) binary_tree_height(tree->right));
}
