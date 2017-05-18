class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(int(nums.size()), 1);

        // make the result[i] the product of elements before result[i]
        for(int i = 1; i < int(nums.size()); ++i) {
        	result[i] = result[i - 1] * nums[i - 1];
        }

        // make the result[i] time the product of elements after result[i]
        int right = 1;
        for(int i = int(nums.size()) - 1; i >= 0; --i) {
        	result[i] *= right;
        	right *= nums[i];
        }
        return result;

    }
};