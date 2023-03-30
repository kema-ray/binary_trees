#include "binary_trees.h"

/**
  * binary_tree_leaves - function that counts the leaves in a binary tree
  * @tree: tree to check
  * Return: 0 if the tree is NULL
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, i = 0, j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		i = binary_tree_leaves(tree->left);
		j = binary_tree_leaves(tree->right);
		leaf = i + j;
		return ((!i && !j) ? leaf + 1 : leaf + 0);
	}
}
