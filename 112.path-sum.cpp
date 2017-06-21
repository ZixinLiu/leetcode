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
    bool hasPathSum(TreeNode* root, int sum) {
		// achieve the end, but no target found
        if(root == nullptr) return false;	

        //base case, when you add the last node, it adds to sum and it is also the leaf node
        if(root -> val == sum && root -> left == nullptr && root -> right == nullptr) return true;

        return (hasPathSum(root -> left, sum - root -> val) || hasPathSum(root -> right, sum - root -> val));
    }
};