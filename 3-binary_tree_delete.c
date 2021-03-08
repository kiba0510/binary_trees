#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: pointer to the root node of the tree to delete.
 * Return: If tree NULL, do nothing.
 **/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        binaty_tree_delete(tree->right);
        binaty_tree_delete(tree->left);
        free(tree);
    }
}