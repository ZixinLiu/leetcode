class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    	int res = -1;
    	for(int i = 0; i < int(nums.size()); ++i){
    		if(nums[abs(nums[i])] > 0) {
    			nums[abs(nums[i])] *= -1;
    		} else {
    			res = abs(nums[i]);
    			return res;
    		}
    	}
    	return res;
        
    }
};