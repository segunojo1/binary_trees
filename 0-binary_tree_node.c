#include "binary_trees.h"
/**
 * binary_tree_node - creates a new node
 *
 * @parent: the pointer to the parent of the new node
 * @value: the value the new node
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;
	return (newnode);
}
