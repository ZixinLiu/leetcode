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
    void pathSumHelp(TreeNode * root, int sum, int current, vector<int> v, vector<vector<int>> & res) {
        if(root == nullptr) return;
        // since the node could be positive or negative, 
        //therefore, we have to go to the bottom to determine wether we should include current path
        v.push_back(root -> val);

        // current remeber the sum of to current path (include crrent root)
        current += root -> val;
        if(current == sum && !root -> left && !root -> right) {
        	res.push_back(v);
        	return;
        }

        pathSumHelp(root -> left, sum, current, v, res);
        pathSumHelp(root -> right, sum, current, v, res);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        if(root == nullptr) return res;
        vector<int> v;
        int current = 0;
        pathSumHelp(root, sum, current, v, res);
        return res;
        
    }
};