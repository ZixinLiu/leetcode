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
	void minDepthHelp(TreeNode * root, int & min_dep) {
		if(root == nullptr)  return;
		min_dep++;
		int min_dep_l = 0;
		int min_dep_r = 0;
		minDepthHelp(root -> left, min_dep_l);
		minDepthHelp(root -> right, min_dep_r);
		if(min_dep_r == 0 && min_dep_l == 0)  return;
		else if(min_dep_l == 0) {
			min_dep += min_dep_r;
		}
		else if(min_dep_r == 0) {
			min_dep += min_dep_l;
		} else {
			min_dep += min(min_dep_l, min_dep_r);
		}

		return;
	}

    int minDepth(TreeNode* root) {
    	if(root == nullptr) return 0;
    	int min_dep = 0;
    	minDepthHelp(root, min_dep);
    	return min_dep;
    }
};