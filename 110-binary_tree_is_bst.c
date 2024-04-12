#include "binary_trees.h"

/**
 * is_bst_helper - Helper function to check if a binary tree is a valid Binary Search Tree (BST).
 *
 * This function recursively checks if a binary tree is a valid BST by traversing
 * through the tree and validating if each node's value falls within the specified range.
 *
 * @tree: Pointer to the root node of the tree to check.
 * @min: Minimum value allowed for nodes in the subtree.
 * @max: Maximum value allowed for nodes in the subtree.
 * 
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */
int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
    if (!tree)
        return 1;

    if (tree->n < min || tree->n > max)
        return 0;

    return is_bst_helper(tree->left, min, tree->n - 1) &&
           is_bst_helper(tree->right, tree->n + 1, max);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree (BST).
 *
 * This function checks if a binary tree is a valid BST by calling a helper function
 * with appropriate range constraints.
 *
 * @tree: Pointer to the root node of the tree to check.
 * 
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
    if (!tree)
        return 0;
    return is_bst_helper(tree, INT_MIN, INT_MAX);
}
