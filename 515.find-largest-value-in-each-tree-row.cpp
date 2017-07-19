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

	// recursion version
	// void largestValuesHelp(TreeNode * root, int level, vector<int> &res) {
	// 	if(root == nullptr) return;
	// 	if(int(res.size()) == level) {
	// 		res.push_back(root -> val);
	// 	} 
	// 	// have element in this level
	// 	else {
	// 		if(res[level] < root -> val) {
	// 			res[level] = root -> val;
	// 		}
	// 	}
	// 	largestValuesHelp(root -> left, level + 1, res);
	// 	largestValuesHelp(root -> right, level + 1, res);

	// }
    vector<int> largestValues(TreeNode* root) {
    	// vector<int> res;
    	// largestValuesHelp(root, 0, res);
    	// return res;

    	// breath first method
    	queue<TreeNode *> q;
      	vector<int> res;
    
    	if(root == nullptr) return res;
    	q.push(root);
    	int count = 1;
    	int new_count = 0;
    	int max = std::numeric_limits<int>::min();
    	while(!q.empty()) {
    		while(count != 0) {
    			TreeNode* f = q.front();
    			if(f -> val > max) {
    				max = f -> val;
    			}
    			q.pop();
    			if(f -> left) {
    				q.push(f -> left);
    				 new_count++;
    			}
    			if(f -> right) {
    				q.push(f -> right);
    			    new_count++;
    			}
    			count--;
    		}
    		res.push_back(max);
    		count = new_count;
    		new_count = 0;
    		max = std::numeric_limits<int>::min();
    	}
    	return res;

    }
};