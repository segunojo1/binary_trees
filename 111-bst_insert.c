#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree (BST).
 *
 * This function inserts a value into a Binary Search Tree (BST).
 *
 * @tree: Double pointer to the root node of the BST to insert value.
 * @value: The value to store in the node to be inserted.
 * 
 * Return: Pointer to the created node, NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
    bst_t *new_node = NULL;
    bst_t *parent = NULL;
    bst_t *current = NULL;

    if (!tree)
        return NULL;

    if (*tree == NULL)
        return (*tree = binary_tree_node(NULL, value));

    current = *tree;
    while (current)
    {
        parent = current;
        if (value < current->n)
            current = current->left;
        else if (value > current->n)
            current = current->right;
        else
            return NULL;
    }

    new_node = binary_tree_node(NULL, value);
    if (value < parent->n)
    {
        parent->left = new_node;
        new_node->parent = parent;
    }
    else
    {
        parent->right = new_node;
        new_node->parent = parent;
    }

    return new_node;
}