#include "binary_trees.h"

/**
 * _deleteTree - Auxiliary function
 * @tree: Pointer to the tree
 * Return: Null
 **/
void _deleteTree(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	_deleteTree(tree->left);
	_deleteTree(tree->right);
	free(tree);
}

/**
 * binary_tree_delete - Delete tree
 * @tree: Pointer to the tree
 * Return: No line
 **/
void binary_tree_delete(binary_tree_t *tree)
{
	_deleteTree(tree);
	tree = NULL;
}
