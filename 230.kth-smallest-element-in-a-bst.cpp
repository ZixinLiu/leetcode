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
	void inorderTraverse(TreeNode * root, int k, int &count, int &res) {
		if(root == nullptr) return;

		// if I increase count here, count will ony remember the number of node other than the order
		inorderTraverse(root -> left, k, count, res);
		
		// Count must be added here, since count is used to remember the order instead of the number of node
		count++;
		if(count == k) {
			res = root -> val;
		}

		inorderTraverse(root -> right, k, count,res);
	}

    int kthSmallest(TreeNode* root, int k) {
        int res = INT_MIN;
        int count = 0;
        inorderTraverse(root, k, count, res);
        return res;

    }
};