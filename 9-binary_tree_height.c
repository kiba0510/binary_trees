#include "binary_trees.h"
/**
 *height- measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height.
 *Return: nbr of level
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t sr = 0, sf = 0;

if (!tree || (!(tree->left) && !(tree->right)))
return (0);
sf = binary_tree_height(tree->left) + 1;
sr = binary_tree_height(tree->right) + 1;
if (sf > sr)
return (sf);
else
return (sr);
}
