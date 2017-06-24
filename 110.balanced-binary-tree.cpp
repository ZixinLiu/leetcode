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
	// left and right subtree are balanced and the height difference is at most one
	void isBalancedHelper(TreeNode * root, int &height) {
		if(root == nullptr) return;
		height++;
		int height_l = 0;
		int height_r = 0;
		isBalancedHelper(root -> left, height_l);
		isBalancedHelper(root -> right, height_r);
		if(height_l == -1 ||  height_r == -1) {
			height = -1;
			return;
		}
		if(abs(height_l - height_r) > 1) {
			height = -1;
			return;
		}
		else {
			height += max(height_l, height_r);
		}
		return;
	}

    bool isBalanced(TreeNode* root) {
    	if(root == nullptr)  return true;
    	// left subtree is not balanced
    	int height_l = 0;
    	isBalancedHelper(root -> left, height_l);
    	if(height_l == -1) return false;
    	
    	// right subtree is not balanced
    	int height_r = 0;
    	isBalancedHelper(root -> right, height_r);
    	if(height_r == -1) return false;

    	// left and right subtrees are balanced, check the height difference
    	return (abs(height_l - height_r) <= 1);
        
    }
};