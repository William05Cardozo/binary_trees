#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function search a node leaf
 * @node: Is a pointer to the node to check
 * Return: If el node is leaf or not
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (!node->right && !node->left);
}
