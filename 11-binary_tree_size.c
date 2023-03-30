#include "binary_trees.h"

/**
  * binary_tree_size - function that returns the size of a tree
  * @tree: tree to check
  * Return: size of tree
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, i = 0, j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		j = binary_tree_size(tree->left);
		i = binary_tree_size(tree->right);
		size = i + j + 1;
	}
	return (size);
}
