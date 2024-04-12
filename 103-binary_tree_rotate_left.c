#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left rotation on a binary tree.
 *
 * This function performs a left rotation on a binary tree rooted at the given node.
 * It updates the pointers accordingly and returns the new root node of the rotated tree.
 *
 * @tree: Pointer to the root node of the tree to rotate.
 * 
 * Return: Pointer to the new root node of the tree once rotated, NULL upon failure.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    if (!tree || !tree->right)
        return (NULL);

    binary_tree_t *new_root = tree->right;
    tree->right = new_root->left;
    
    if (new_root->left)
        new_root->left->parent = tree;
    
    new_root->parent = tree->parent;

    if (tree->parent)
    {
        if (tree->parent->left == tree)
            tree->parent->left = new_root;
        else
            tree->parent->right = new_root;
    }

    new_root->left = tree;
    tree->parent = new_root;

    return (new_root);
}
