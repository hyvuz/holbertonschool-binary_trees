#include "binary_trees.h"

/**
* binary_tree_size - Calculates the size of a binary tree
* @tree: pointer to the root node of the tree
*
* Return: the size of the tree (number of nodes)
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0); /* No nodes in an empty tree */

/* Recursively calculate size of left and right subtrees */
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
