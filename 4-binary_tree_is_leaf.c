#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Determines if a node is a leaf.
 * @node: Pointer to the node to verify.
 * Return: 1 if the node is a leaf, 0 if it's not, or 0 if node is NULL.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
