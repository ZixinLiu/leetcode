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
	void convertBSTHelp(TreeNode * root, int &pre) {
		if(root == nullptr) return;
		convertBSTHelp(root -> right, pre);
		root -> val += pre;
		pre = root -> val;
		convertBSTHelp(root -> left, pre);
	}

    TreeNode* convertBST(TreeNode* root) {
    	if(root == nullptr) return root;
    	int pre = 0;
    	convertBSTHelp(root, pre);
		return root;
        
    }
};