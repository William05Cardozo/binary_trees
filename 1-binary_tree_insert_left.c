#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a new node in the left
 * @parent: Is a pointer to the node to insert the left-child in
 * @value: Is the value to store in the new node
 * nleft: new node
 * nrepla: Existing node
 * Return: New node
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nleft, *nrepla;

	nleft = malloc(sizeof(binary_tree_t));
	if (nleft == NULL)
	{
		return (NULL);
	}
	nleft->parent = parent;
	nleft->n = value;
	nleft->left = NULL;
	nleft->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = nleft;
	}
	else
	{
		nrepla = parent->left;
		parent->left = nleft;
		nleft->left = nrepla;
		nrepla->left = NULL;
		nrepla->right = NULL;
		nrepla->parent = nleft;
	}
	return (nleft);
}
