#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 * @tree: Pointer to the root node of the binary
 * tree to traverse and count leaves.
 * Return: The total number of leaves as an integer.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		count += 1;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
