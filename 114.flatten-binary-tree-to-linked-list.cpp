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

	TreeNode * flattenHelp(TreeNode * root) {
		if(root == nullptr) return root;
		TreeNode * left_sub = flattenHelp(root -> left);
		TreeNode * right_sub = flattenHelp(root -> right);
		root -> left = nullptr;
		root -> right = nullptr;
		if(left_sub != nullptr) {
			root -> right = left_sub;
			while(left_sub -> right != nullptr) { 
				left_sub = left_sub -> right;
			}
			left_sub -> right = right_sub;
		} else {
			root -> right = right_sub;
		}
		return root;
	}

	void flatten(TreeNode* root) {
		if(root == nullptr) return ;
		root = flattenHelp(root);
	}












};