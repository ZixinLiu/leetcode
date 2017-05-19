class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    	
    	unordered_map<int, vector<int>> hash;
    	for(int i = 0; i < int(nums.size()); ++i) {
    		hash[nums[i]].push_back(i);
    		if(int(hash[nums[i]].size()) > 1) {
    			return true;
    		}
    	}
    	return false;
    }
};