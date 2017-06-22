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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    	if(p -> val == root -> val || q -> val == root -> val) return root;
    	// both p, q val greater than root val
    	else if(p -> val > root -> val && q -> val > root -> val) {
    	 	return lowestCommonAncestor(root -> right, p, q);
    	}
    	// both p, q val less than root val
    	else if(p -> val < root -> val && q -> val < root -> val) {
    		return lowestCommonAncestor(root -> left, p, q);
    	}
    	// one is greater root and the other one is less than the root
    	else {
    		return root;
    	}
        
    }
};