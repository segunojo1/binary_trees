#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to find sibling
 * Return: returns sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || !node->parent->left || !node->parent->right)
    {
        return (NULL);
    }
    if (node->parent->left->n == node->n)
    {
        return (node->parent->right);
    }
    else
    {
        return (node->parent->left);
    }
}