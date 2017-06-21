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
	void binaryTreePathsHelper(vector<string> &res, TreeNode *root, string current) {
		if(root -> left == nullptr && root -> right == nullptr) {
			res.push_back(current);
			return;
		}
		if(root -> left)  binaryTreePathsHelper(res, root -> left, current + "->" + to_string(root -> left -> val));
		if(root -> right) binaryTreePathsHelper(res, root -> right, current + "->" + to_string(root -> right -> val));
	}

    vector<string> binaryTreePaths(TreeNode* root) {
    	vector<string> res;
    	if(root == nullptr) return res;
    	binaryTreePathsHelper(res, root, to_string(root -> val));
    	return res;
    }
};