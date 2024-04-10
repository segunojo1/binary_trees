#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the binary tree
 * @tree: the pointer to root
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
    
}