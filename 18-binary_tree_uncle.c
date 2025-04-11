#include "binary_trees.h"

/**
 * sibling - Retrieves the sibling of a node to locate the uncle.
 * @node: Pointer to the node whose sibling is to be found.
 * Return: Pointer to the sibling node, or NULL if there is no sibling.
*/

binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
 * binary_tree_uncle - Determines the uncle of a given node in a binary tree.
 * @node: Pointer to the node whose uncle is to be identified.
 * Return: Pointer to the uncle node, or NULL if no uncle exists.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (sibling(node->parent));
}

