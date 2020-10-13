#pragma once
#include <string>
#include <vector>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

vector<string> BinaryTreePaths(TreeNode* root);