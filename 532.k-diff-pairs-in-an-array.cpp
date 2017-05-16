
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
 		if (k < 0)
 		{
 			return 0;
 		}
        // have to use array here since it has fixed size
        unordered_map<int, int> hash;
        for (int i = 0; i < int(nums.size()); ++i) {
        	hash[nums[i]]++;
        }
        if(k == 0) {
        	for(auto it = hash.begin(); it != hash.end(); ++it) {
	        	if (it -> second >= 2){
	        		count++;
	        	}
	        }
        }
        else {
	        for(auto it = hash.begin(); it != hash.end(); ++it) {
	        	if (hash.find(it -> first + k) != hash.end()) {
	        		count++;
	        	}
	        	if(hash.find(it -> first - k) != hash.end()) {
	        		count++;
	        	}
	        }
	        count /= 2;
    	}
        return count;
    }
};
