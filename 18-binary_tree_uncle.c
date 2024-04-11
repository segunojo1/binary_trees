#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to find uncle of
 * Return: returns the pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (!node || !node->parent->parent->left
        || !node->parent->parent->right
	|| !node->parent || !node->parent->parent)
    {
        return (NULL);
    }
    if (node->parent->parent->left->n == node->parent->n)
    {
        return (node->parent->parent->right);
    }
    else
    {
        return (node->parent->parent->left);
    }
}
