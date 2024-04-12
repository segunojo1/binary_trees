#include "binary_trees.h"

/**
 * bt_is_complete_helper - Helper function to check if a binary tree is complete.
 *
 * This function recursively checks if a binary tree is complete by traversing
 * through the tree and validating if each node is within the bounds of the size
 * of the tree.
 *
 * @tree: Pointer to the root node of the tree to check.
 * @index: Index of the current node being checked.
 * @size: Total number of nodes in the tree.
 * 
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int bt_is_complete_helper(const binary_tree_t *tree, size_t index, size_t size)
{
    if (!tree)
        return (1);
    
    if (index >= size)
        return (0);

    return (bt_is_complete_helper(tree->left, 2 * index + 1, size) &&
            bt_is_complete_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * This function calculates the total number of nodes in a binary tree
 * by recursively traversing through the tree.
 *
 * @tree: Pointer to the root node of the tree to measure.
 * 
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    return (binary_tree_size(tree->left) +
            binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 *
 * This function checks if a binary tree is complete by first calculating
 * the total number of nodes in the tree and then using a helper function
 * to validate if each node is within the bounds of the tree size.
 *
 * @tree: Pointer to the root node of the tree to check.
 * 
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    size_t size;

    if (!tree)
        return (0);
    
    size = binary_tree_size(tree);

    return (bt_is_complete_helper(tree, 0, size));
}
