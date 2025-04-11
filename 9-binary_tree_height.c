#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* If the node is a leaf, height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively find the height of left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the larger one + 1 to include the current edge */
	if (left_height >= right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
