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
         // underlying array is 1,2,3,4,5...., given array can be treated as the index of underlying array
         // we should push the index to the result, which is one of the element in the given array.
    }
};

