#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node t the left of a node
 * @parent: pointer to the parent node
 * @value: value the node data
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;
    binary_tree_t *temp_tree = parent;
    new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if (!new_node)
    {
        return (NULL);
    }
    if (parent->left)
    {

        parent->left = new_node;
        parent->n = value;
        new_node->left = temp_tree;
        new_node->parent = parent;
    }
    else
    {
        new_node->parent =parent;
        parent->left = new_node;
        parent->n = value;
    }
}
