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

	TreeNode * sortedArrayToBSTHelp(vector<int> nums, int l, int r) {
		// vector size is 0s
		if(r < l) return nullptr;

		TreeNode * root = new TreeNode(nums[(l+r)/ 2]);
		TreeNode * left_sub = sortedArrayToBSTHelp(nums, l, (l+r) / 2 - 1);
		TreeNode * right_sub = sortedArrayToBSTHelp(nums, (l+r) / 2 + 1, r);
        root -> left = left_sub;
        root -> right = right_sub;
        return root;
	}

	TreeNode* sortedArrayToBST(vector<int>& nums) {
	 	// aviod copy, better vision
	 	// if(int(nums.size()) == 0) return nullptr;
   //      TreeNode * root = new TreeNode(nums[int(nums.size()) / 2]);
        
   //      vector<int> left_vec;
   //      for(int i = 0; i < int(nums.size()) / 2; ++i) {
   //          left_vec.push_back(nums[i]);
   //      }
   //      TreeNode * left_sub = sortedArrayToBST(left_vec);
        
   //      vector<int> right_vec;
   //      for(int i = int(nums.size()) / 2 + 1; i < int(nums.size()); ++i) {
   //          right_vec.push_back(nums[i]);
   //      }
   //      TreeNode * right_sub = sortedArrayToBST(right_vec);
        
   //      root -> left = left_sub;
   //      root -> right = right_sub;
   //      return root;
		return sortedArrayToBSTHelp(nums, 0, int(nums.size()) - 1);
    }
};




