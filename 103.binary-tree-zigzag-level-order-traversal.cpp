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
	void help(TreeNode * root, int level, vector<vector<int>> &res) {
		if(root == nullptr) return;
		if(int(res.size()) == level) {
			vector<int> level_vec;
			level_vec.push_back(root -> val);
			res.push_back(level_vec);
		} else {
			res[level].push_back(root -> val);
		}
		help(root -> left, level + 1, res);
		help(root -> right, level + 1, res);

	}

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        help(root, 0, res);
        for(int i = 0; i < int(res.size()); ++i) {
        	if(i % 2 != 0) {
        		reverse(res[i].begin(), res[i].end());
        	}
        }
        return res;

    }
};