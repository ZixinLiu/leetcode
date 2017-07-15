/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	// this function is used to calculate the max depth of current tree
	int diameterOfBinaryTreeHelp(TreeNode * root) {
		if(root == nullptr) return 0;
		int count = 1;
		int l_max = diameterOfBinaryTreeHelp(root -> left);
		int r_max = diameterOfBinaryTreeHelp(root -> right);
		if(l_max >= r_max) {
			return (count += l_max);
		} else {
			return (count += r_max);
		}
	}
	// for each node find the longest path and keep update the res,
	// to find the longest path of the whole tree
	void traverse_all_node(TreeNode * root, int &res) {
		if(root == nullptr) {
			return;
		}
		// based on current tree. current remember the longest path
		int current = diameterOfBinaryTreeHelp(root -> left) + diameterOfBinaryTreeHelp(root -> right);
		if(current >= res) res = current;
		traverse_all_node(root -> left, res);
		traverse_all_node(root -> right, res);
	}

    int diameterOfBinaryTree(TreeNode* root) {
    	int res = 0;
    	traverse_all_node(root, res);
    	return res;
    }
};