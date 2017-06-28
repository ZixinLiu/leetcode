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
	void isValidBSTHelp(TreeNode * root, bool &valid) {
		if(root == nullptr)  return;
    	bool valid_l = true;
    	isValidBSTHelp(root -> left, valid_l);
    	bool valid_r = true;
    	isValidBSTHelp(root -> right, valid_r);
    	if(!valid_l || !valid_r) valid = false;
    	if(root -> left != nullptr && root -> left -> val >=  root -> val) {
    		valid = false;
    	}
    	if(root -> right != nullptr && root -> right -> val <=  root -> val) {
    		valid = false;
    	}
        return;
	}

    bool isValidBST(TreeNode* root) {
    	if(root == nullptr) return true;
    	bool isValid = true;
    	isValidBSTHelp(root, isValid);
    	return isValid;
    	
    }
};