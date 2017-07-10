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
    	if (left == null)
    	{
    		return right;
    	} else {
    		if (right == null)
    		{
    			return left;
    		} else {
    			return root;
    		}
    	}
        return left == null ? right : right == null ? left : root;
    }
};
