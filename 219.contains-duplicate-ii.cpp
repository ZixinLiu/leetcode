class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(int(nums.size()) == 0 || k == 0) return false;
        unordered_map<int, int> hash;
        for(int i = 0; i < int(nums.size()); ++i) {
            // find duplicates
            if(hash.find(nums[i]) != hash.end()) {
                if(i - hash[nums[i]] <= k) { 
                    return true;
                }
                // replace it with the most recent index
                else {
                    hash[nums[i]] = i;
                }

            } else {
                hash[nums[i]] = i;
            }
        }
        return false;
        
    }
};