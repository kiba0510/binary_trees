#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node -
 * @parent: Pointer to parent node.
 * @value: Value stored in the new node.
 *
 * Return: Pointer to the new node (leaf) or NULL on failure.
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *root;

root = malloc(sizeof(binary_tree_t));
if (!root)
return (NULL);
root->parent = parent;
root->right = NULL;
root->left = NULL;
root->n = value;

return (root);
}
