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
	void levelOrderHelper(TreeNode * root, int level, vector<vector<int>> & result) {
		if(root ==  nullptr)  return;
		if(int(result.size()) == level) {
			vector<int> row;
			result.push_back(row);
		}
		result[level].push_back(root -> val);
		levelOrderHelper(root -> left, level + 1, result);
		levelOrderHelper(root -> right, level + 1, result);
	}

    vector<vector<int>> levelOrder(TreeNode* root) {
    	vector<vector<int>> result;
    	levelOrderHelper(root, 0, result);
        return result;
    }
};