#include "binary_trees.h"
/**
* traverse_helper - traverses the tree in postorder
*
* @tree: the tree to be traversed
* @func: function called on each node
* @level: level of tree
* Return: nothing
*/
void traverse_helper(const binary_tree_t *tree, void (*func)(int), size_t lev)
{
	if (lev == 1)
		func(tree->n);
	else
	{
		traverse_helper(tree->left, func, lev - 1);
		traverse_helper(tree->right, func, lev - 1);
	}
}

/**
* binary_tree_height - gets the height of a tree
*
* @tree: pointer to the tree
* Return: heght of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_left > height_right ? height_left : height_right);
}

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value in the node must be passed as a parameter to this function
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    size_t level, maxlevel;

	if (!tree || !func)
		return;
	maxlevel = binary_tree_height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		traverse_helper(tree, func, level);
    
}