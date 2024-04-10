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

    if (!parent)
        return (NULL);

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    if (parent->left)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    parent->left = new_node;

    return (new_node);
}
