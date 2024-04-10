#include "binary_trees.h"
/**
 * binary_tree_height - return height of the tree
 * @tree: the pointer to the root
 */
size_t binary_tree_height(const binary_tree_t *tree) {
	size_t left_height = 0;
	size_t right_height = 0;
	size_t height;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left || tree->right)
		{
			left_height = binary_tree_height(tree->left);
			right_height = binary_tree_height(tree->right);

			if (left_height > right_height)
			{
				height = left_height + 1;
				return (height);
			}
			else
			{
				height = right_height + 1;
				return (height);
			}
		}
	}
	return (0);
}
