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
	void averageOfLevelsHelp(TreeNode * root, vector<double> &res,int level, vector<int> & count) {
		if(root == nullptr) return;
		if(int(res.size()) == level) {
			res.push_back(root -> val / (pow(2, level)));
			count.push_back(1);
		} else {
			count[level]++;
			res[level] += root -> val / (pow(2, level));
		}
		averageOfLevelsHelp(root -> left, res, level + 1, count);
		averageOfLevelsHelp(root -> right, res, level + 1, count);
	}


    vector<double> averageOfLevels(TreeNode* root) {
    	vector<double> res;
    	vector<int> count;
    	averageOfLevelsHelp(root, res, 0, count);
    	for(int i = 0;  i < int(res.size()); ++i) {
    		res[i] /= count[i];
    		res[i] *= pow(2, i);
    	}
    	return res;
        
    }

    // level order traversal, always add node / 2^level  to the res 
    //(suppose there are 2^ level node in this level)
    //also count # of nodes in each level
    // at last, res / count * 2 ^ level to prevent overflow
};