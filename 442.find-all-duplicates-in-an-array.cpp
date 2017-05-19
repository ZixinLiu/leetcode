class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        // negative appear once, positive never appear, 0 appear twice
        for(int i = 0;  i < int(nums.size()); ++i) {
            if(nums[abs(nums[i]) - 1] < 0) {
                result.push_back(abs(nums[i]));
            }
            if(nums[abs(nums[i]) - 1] > 0) {
                nums[abs(nums[i]) - 1] = - nums[abs(nums[i]) - 1];
            }
        }
         return result;
    }
};

