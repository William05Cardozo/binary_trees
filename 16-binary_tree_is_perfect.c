#include "binary_trees.h"
/**
 * binary_tree_height - Function to calculate the height
 * @tree:pointer to the root parent
 * Return: height or 0 if the is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (h_right <= h_left)
		return (h_left + 1);

	return (h_right + 1);

}

/**
 * binary_tree_balance - Function we use to calculate the balance
 * @tree: pointer to the parent
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}

/**
 * binary_tree_is_leaf - function we use to calcluate the leaf
 * @node: is a pointer to the parent
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node->left == NULL && node->right == NULL)
		leaf = 1;

	return (leaf);
}

/**
 * binary_tree_is_perfect - Function we use to show a perfect tree
 * @tree:  is a pointer to the parent
 * Return: pointer to the new node
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if ((binary_tree_balance(tree) == 0))
	{
		if (left == 0 || right == 0)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}
