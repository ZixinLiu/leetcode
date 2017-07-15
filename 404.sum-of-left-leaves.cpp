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
	void levelOrder(TreeNode * root, int level, int &sum, vector<int> &count) {
		if(int(count.size()) == level) {
			count.push_back(1);
		} 
		else {
			count[level]++;
		}
		if(root == nullptr) return;
		if(!root ->left && !root -> right && count[level] % 2 == 1)  {
			sum += root -> val;
		}

		levelOrder(root -> left, level + 1, sum, count);
		levelOrder(root -> right, level + 1, sum, count);
	}
	


    int sumOfLeftLeaves(TreeNode* root) {
    	// level order traverse,
    	// count the first element of each level except for level 0
    	int sum = 0;
    	vector<int> count;
    	// prevent from nullptr
    	if(root == nullptr) return sum;
    	// start from the left and right, since you are going to include leave or root
    	// special case [1], sum = 0, even though, the level start from 1, we assume start from 0 for the convience
    	levelOrder(root -> left, 0, sum, count);
    	levelOrder(root -> right, 0, sum, count);
    	return sum;
    }
};