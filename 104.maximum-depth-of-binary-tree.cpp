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

	// void maxDepthHelp(int &result, TreeNode *root, int depth) {
	// 	if(root == nullptr) return;
	// 	if(depth > result) result = depth;
	// 	maxDepthHelp(result, root -> left, depth + 1);
	// 	maxDepthHelp(result, root -> right, depth + 1);
	// } 


    int maxDepth(TreeNode* root) {
        
        if(root == nullptr) return 0;
        // maxDepthHelp(result, root, 1);
        // return result;
        return 1 + max(maxDepth(root -> left), maxDepth(root -> right));
    }
};