#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a binary tree in post order
 * @tree: the pointre to the tree to traverse
 * @func: func to traverse
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	};
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

