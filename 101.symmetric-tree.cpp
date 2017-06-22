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
	bool isSymmetricHelp(TreeNode * left_sub, TreeNode* right_sub) {
		if(left_sub == nullptr && right_sub == nullptr) return true;
		else if(left_sub == nullptr || right_sub == nullptr) return false;
		else {
			if(left_sub -> val == right_sub -> val) {
				return(isSymmetricHelp(left_sub -> left, right_sub -> right)
				 	&& isSymmetricHelp(left_sub -> right, right_sub -> left));
			} else {
				return false;
			}
		}
	}
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return  isSymmetricHelp(root -> left, root -> right);
    }
};