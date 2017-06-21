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
	void levelhelper(TreeNode * root, int level, vector<vector<int>> &result) {
		if(root ==  nullptr)  return;
		if(int(result.size()) == level) {
			vector<int> row;
			result.push_back(row);
		}
		result[level].push_back(root -> val);
		levelhelper(root -> left, level + 1, result);
		levelhelper(root -> right, level + 1, result);
	}


    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        levelhelper(root, 0, result);
        reverse(result.begin(), result.end());

        return result;
    //     stack<vector<int>> s;
    //     queue<TreeNode *> q;

    //     vector<int> count;
    //     if(root == nullptr) return result;h
    //     count.push_back(1);
    //     q.push(root);

    //     while(!q.empty()) {
    //     	int num = 0;
    //     	vector<int> s_vec;
    //     	s_vec.reserve(count.back());
    //     	for(int i = 0; i < int(count.back()); ++i) {
				// TreeNode * fro = q.front();
	   //      	s_vec.push_back(fro -> val);
	   //      	q.pop();
	   //      	if(fro -> left != nullptr) {
	   //      		q.push(fro -> left);
	   //      		num++;
	   //      	}
	   //      	if(fro -> right != nullptr) {
	   //      		q.push(fro -> right);
	   //      		num++;
	   //      	}
	   //      }
	   //      count.push_back(num);
	   //      s.push(s_vec);
    //     }
    //     while(!s.empty()) {
    //     	result.push_back(s.top());
    //     	s.pop();
    //     }
    //     return result;

    }
};