#include "binary_trees.h"

/**
 * binary_tree_nodes - Function we use for count nodes with childs
 * @tree: Pointer to parent
 * numb_nodes: Variable
 * Return: Number of node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t numb_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		numb_nodes += 1;
	numb_nodes += binary_tree_nodes(tree->left);
	numb_nodes += binary_tree_nodes(tree->right);

	return (numb_nodes);
}
