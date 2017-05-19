class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> result;
    	unordered_map <int, vector<int>> hash;
    	for(int i = 0; i < int(nums.size()); ++i) {
    		hash[nums[i]].push_back(i);
    	}
    	for(int i = 0; i < int(nums.size()); ++i) {
    		int rest = target - nums[i];
    		// find the second number, and the second number can't be itself if it is the unique number in the array
    		if(hash.find(rest) != hash.end() && int(hash[rest].size()) == 1 && hash[rest][0] != i) {
    			result.push_back(i);
    			result.push_back(hash[rest][0]);
    			break;
    		}
    		if(hash.find(rest) != hash.end() && int(hash[rest].size()) != 1) {
    			result = hash[rest];
    			break;
    		}
    	}
    	return result;

    }
};