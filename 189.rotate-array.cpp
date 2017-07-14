class Solution {
public:
	
    void rotate(vector<int>& nums, int k)  {

    	int new_k = k % int(nums.size());
    	if(new_k == 0) return;
    	reverse(nums.begin(), nums.end());
    	// second parameter should be the begin() + length of the target array
    	reverse(nums.begin(), nums.begin() + new_k);
    	reverse(nums.begin() + new_k, nums.end());
    }
};