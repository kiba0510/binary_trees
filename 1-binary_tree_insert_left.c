#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node,
 * or NULL on failure or if parent is NULL.
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left_child = NULL;

if (!parent)
return (NULL);
left_child = binary_tree_node(parent, value);
if (!left_child)
return (NULL);
if (parent->left)
{
parent->left->parent = left_child;
left_child->left = parent->left;
}
parent->left = left_child;

return (left_child);
}
