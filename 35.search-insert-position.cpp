class Solution {
public:
	// if it is in the array, it will return the corresponding idx;
	// if it could not find it, the left idx should be the correct place to insert.
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = int(nums.size()) - 1;
        while(l <= r) {
        	int m = l + (r - l) / 2;
        	if (nums[m] == target) {
        		return m;
        	} else if(nums[m] < target) {
        		l = m + 1;
        	} else {
        		r = m - 1;
        	}
        }
        return l;
    }
};