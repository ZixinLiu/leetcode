class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // when the size <= 1
        if(int(nums.size()) <= 1) {
            return int(nums.size());
        }
        
        // when the size is >= 2
        int add_pos = 1;
        while(nums[add_pos] != nums[add_pos - 1]) {
            add_pos++;
            if(add_pos > int(nums.size()) - 1) {
                return int(nums.size());
            }
        }
        int unique_pos = add_pos;
        while(nums[unique_pos] == nums[unique_pos - 1]) {
            unique_pos++;
            while(unique_pos > int(nums.size()) - 1) {
                return add_pos;
            }
        }
        
        while(unique_pos < int(nums.size())) {
            nums[add_pos] = nums[unique_pos];
            while(nums[unique_pos] == nums[add_pos]) {
                unique_pos++;
                if(unique_pos > int(nums.size()) - 1) break;
            }
            add_pos++;
        }
        return add_pos;
        
    }
};
