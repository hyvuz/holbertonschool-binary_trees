#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root node.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 *
 * Description: A root node is one that has no parent.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
