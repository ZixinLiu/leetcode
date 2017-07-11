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
    	
    	// p, q one is in the left subtree and one is in the right subtree
    	if(left && right) return root;

    	// if one of the left and right is nullptr, means the pq, appear in the same side, directly return that side
    	if(left == nullptr) {
    		return right;
    	} else {
    		return left;
    	}
    }

    // better version
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if (!root || p == root || q == root) return root;
       TreeNode *left = lowestCommonAncestor(root->left, p, q);
       // not nullptr : case 1 : find one of the p, q ,left point to one of them, or they find the lca
       // this condition means the lca
       if (left && left != p && left != q) return left;

       TreeNode *right = lowestCommonAncestor(root->right, p , q);
       if (right && right != p && right != q) return right;


       if (left && right) return root;
       return left ? left : right;
    }
};

