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
    bool isValidBSTHelp(TreeNode * root, TreeNode * min_node, TreeNode * max_node) {
        if(root == nullptr) return true;

        if((max_node && root -> val >= max_node -> val) || (min_node && root -> val <= min_node -> val)) return false;
        // when you go to left subtree, you don care the min, when you go to right, you don care max
        return (isValidBSTHelp(root -> left, min_node, root) && isValidBSTHelp(root -> right, root, max_node));
      
    }
    bool isValidBST(TreeNode* root) {
       return isValidBSTHelp(root, nullptr, nullptr);
    }


};