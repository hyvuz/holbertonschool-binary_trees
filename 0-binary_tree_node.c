#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a new node in a binary tree.
 *
 * @parent: Pointer to the parent node.
 * @value: The integer value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if it failed.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

new_node = malloc(sizeof(binary_tree_t));
if (!new_node)
return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

return (new_node);
}
