#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: Pointer to the root node of the binary tree to traverse.
 * @func: Pointer to a function to call for each node.
 * Return: This function does not return a value (void).
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, (func));
	binary_tree_postorder(tree->right, (func));
	(func)(tree->n);
}
