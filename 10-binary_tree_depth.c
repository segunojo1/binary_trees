#include "binary_trees.h"
/**
 * binary_tree_depth - find sthe depth of a tree
 * @tree: the pointer to the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *current;
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		current = tree->parent;
		while (current != NULL)
		{
			height += 1;
			current = current->parent;
		}
	}
	return (height);
}
