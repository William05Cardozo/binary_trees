#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a new node in the right
 * @parent: Is a pointer to the node to insert the left-child in
 * @value: Is the value to store in the new node
 * nleft: new node
 * nrepla: Existinig node
 * Return: New node
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nright, *nrepla;

	if (parent == NULL)
	{
		return (NULL);
	}
	nright = malloc(sizeof(binary_tree_t));
	if (nright == NULL)
	{
		return (NULL);
	}
	nright->parent = parent;
	nright->n = value;
	nright->left = NULL;
	nright->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = nright;
	}
	else
	{
		nrepla = parent->right;
		parent->right = nright;
		nright->right = nrepla;
		nrepla->left = NULL;
		nrepla->right = NULL;
		nrepla->parent = nright;
	}
	return (nright);
}
