#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree.
 *
 * This function performs a right rotation on a binary tree rooted at the given node.
 * It updates the pointers accordingly and returns the new root node of the rotated tree.
 *
 * @tree: Pointer to the root node of the tree to rotate.
 * 
 * Return: Pointer to the new root node of the tree once rotated, NULL upon failure.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
    if (!tree || !tree->left)
        return (NULL);

    binary_tree_t *new_root = tree->left;
    tree->left = new_root->right;
    
    if (new_root->right)
        new_root->right->parent = tree;
    
    new_root->parent = tree->parent;

    if (tree->parent)
    {
        if (tree->parent->left == tree)
            tree->parent->left = new_root;
        else
            tree->parent->right = new_root;
    }

    new_root->right = tree;
    tree->parent = new_root;

    return (new_root);
}