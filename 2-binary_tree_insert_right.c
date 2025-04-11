#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child.
 * @parent: Pointer to the node where the new right
 * child will be inserted.
 * @value: Value to store in the new node.
 * Return: Pointer to the newly created node.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;
	new_node->parent = parent;
	return (new_node);
}
