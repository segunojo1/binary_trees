#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: returns a pointer the ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t first_depth, second_depth;

	if (!first || !second)
	{
		return (NULL);
	}
	first_depth = binary_tree_dep(first);
	second_depth = binary_tree_dep(second);
	while (first_depth > second_depth)
	{
		first = first->parent;
		first_depth--;
	}
	while (second_depth > first_depth)
	{
		second = first->parent;
		second_depth--;
	}
	while (first && second)
	{
		if (first == second)
		{
			return ((binary_tree_t *)first);
		}

		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}

/**
 * binary_tree_dep - finds the depth of a node
 * @node: pointer to the node to find it's depth
 *
 * Return: returns the depth
 */
size_t binary_tree_dep(binary_tree_t *node)
{
	size_t dep = 0;

	if (!node)
	{
		return (0);
	}

	while (node->parent)
	{
		dep++;
		node = node->parent;
	}

	return (dep);
}

