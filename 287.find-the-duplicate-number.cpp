class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    	
    	// modify the array 
    	// int res = -1;
    	// for(int i = 0; i < int(nums.size()); ++i){
    	// 	if(nums[abs(nums[i])] > 0) {
    	// 		nums[abs(nums[i])] *= -1;
    	// 	} else {
    	// 		res = abs(nums[i]);
    	// 		return res;
    	// 	}
    	// }
    	// return res;

    	int slow = nums[0];
    	int fast = nums[0];
    	int curhead = nums[0];
    	int curinter;

	    while(true){
	    	slow = nums[slow];
	    	fast = nums[fast];
	    	fast = nums[fast];
	    	if(slow == fast) {
	    		curinter = slow;
	    		break;
	    	}
	    }
	    if(curinter == curhead) return curhead;
	    while(curhead != curinter) {
	    	curinter = nums[curinter];
	    	curhead = nums[curhead];
	    }
	    return curhead;   
    }
};