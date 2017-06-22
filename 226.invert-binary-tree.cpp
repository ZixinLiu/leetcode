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
	// manipulate root node, first thought
	// void invertTreeHelp(TreeNode * root) {
	// 	if(root == nullptr) return;
 //    	TreeNode *temp = root -> left;
 //    	root -> left = root -> right;
 //    	root -> right = temp;

 //    	invertTreeHelp(root -> left);
 //    	invertTreeHelp(root -> right);
	// }

 //    TreeNode* invertTree(TreeNode* root) {
 //    	if(root == nullptr) return root;
 //    	invertTreeHelp(root);
 //    	return root;
 //    }

    TreeNode* invertTree(TreeNode* root) {
    	if(root == nullptr) return root;
    	TreeNode * left = invertTree(root -> left);
    	TreeNode * right = invertTree(root -> right);

    	root -> left = right;
    	root -> right = left;
    	return root;
    }







};