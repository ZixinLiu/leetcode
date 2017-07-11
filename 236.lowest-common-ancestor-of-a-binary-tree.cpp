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
    	
    	// can't just comapre the p, q value with root, they have to be the same node, since there are dupliacte values
    	if(root == nullptr || root == p  || root == q ) {
    		return root;
    	}
    	// since the root is not the LCA of p, q, go to its left and right subtree
    	TreeNode * left = lowestCommonAncestor(root -> left, p, q);
    	TreeNode * right = lowestCommonAncestor(root -> right, p, q);
    	
    	// if find p q in current tree, but root is not p, q return root;
    	if(left && right) return root;

    	// if could not find lca in left, then both q,p in the right, return right, vice versa.
    	if(left == nullptr) {
    		return right;
    	} else {
    		return left;
    	}
    }

	
};
