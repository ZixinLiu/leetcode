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
	// their roots has been paired
	bool isSame(TreeNode* s, TreeNode* t) {
		if(!s && !t) return true;
		if(!s || !t) return false;
		if(s -> val != t -> val) return false;
		return isSame(s -> left, t -> left) && isSame(s -> right, t -> right);

	}
	// return t is a subset of s
    bool isSubtree(TreeNode* s, TreeNode* t) {
    	if(!s) return false;
    	// compare every node of s, to match the right, if the root match check the following structure
    	if(isSame(s, t)) return true;
    	// if current are to same, keep comparing left and right
    	return(isSubtree(s -> left, t) || isSubtree(s -> right, t));     
    }
};
