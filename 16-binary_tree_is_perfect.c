#include "binary_trees.h"

/**
 * depth - Calculates the depth of a node in a binary tree.
 * @tree: Pointer to the node whose depth is to be measured.
 * Return: The depth of the node as an integer.
*/

int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the binary tree to evaluate.
 * @d: Depth of the binary tree as calculated by the calling function.
 * @level: Current level of the tree being processed.
 * Return: 1 if the binary tree is perfect, or 0 if it is not.
*/

int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, d, level + 1) &&
			is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Determines if a binary tree is perfect.
 * @tree: Pointer to the root node of the binary tree to evaluate.
 * Return: 1 if the binary tree is perfect, or 0 if it is not.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = depth(tree);
	return (is_perfect(tree, d, 0));
}
