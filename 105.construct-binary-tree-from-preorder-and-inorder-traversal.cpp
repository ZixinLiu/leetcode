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
	// keep both current preorder vector and inorder vector , recursion until the length is 0, add nullptr
    TreeNode* buildTreeHelp(vector<int> & in, vector<int> & pre, int l_in, int l_pre, int length) {
        if(length == 0) return nullptr;
        TreeNode * root = new TreeNode (pre[l_pre]);
        int position = l_in;
        for(int i = 0; i < length ; ++i) {
            if(in[i + l_in] == root -> val) {
                position = i + l_in;
                break;
            }
        }
        TreeNode * l = buildTreeHelp(in, pre, l_in, l_pre + 1, position - l_in);
        TreeNode * r = buildTreeHelp(in, pre, position + 1, l_pre + position - l_in + 1, l_in + length - 1 - position);
        root -> left = l;
        root -> right = r;
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTreeHelp(inorder, preorder, 0, 0, int(preorder.size()));
        
    }
};