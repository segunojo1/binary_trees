#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses a binary tree in post order
 * @tree: the pointer to the tree to traverse
 * @func: func to traverse
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

