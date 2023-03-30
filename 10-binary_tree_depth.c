#include "binary_trees.h"

/**
  * binary_tree_depth - depth of specified node from root
  * @tree: node to check the depth
  * Return: 0 if the tree is NULL
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 +
			binary_tree_depth(tree->parent) : 0);
}
