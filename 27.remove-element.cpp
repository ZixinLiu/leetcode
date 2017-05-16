class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    // my initial try, when I find the target, I swap with the last element and pop back
    //     int start = 0;
    //     while(start <= int(nums.size()) - 1) {
    //     	if (nums[start] == val) {
    //     		swap(nums[start], nums[int(nums.size()) - 1]);
    //     		nums.pop_back();
    //     	} else {
    //     		++start;
    //     	}
    //     } 
    //     return int(nums.size());
    // }
    // faster version
    	// use an var to remeber first xth element who are not target
    	int num_nonTartget = 0;
    	for (int i = 0; i < int(nums.size()); ++i) {
    		if (nums[i] != val) {
    			nums[num_nonTartget] = nums[i];
    			num_nonTartget++;
    		}
    	}
    	return num_nonTartget;
    }
};