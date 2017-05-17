class Solution {
public:
    int missingNumber(vector<int>& nums) {
    // initial thought, try to sort first and compare with targets, 
    // the complexity of sort function is algorithm library is O(nlogn),
   	// this doesn't meet complexity requirement


    // 	// sort the nums in increasing order
    // 	sort(nums.begin(), nums.end());

    // 	// compare the elements to 0 to size - 1
    // 	for(int i = 0; i < int(nums.size()); ++i) {
    // 		if(nums[i] != i) {
    // 			// if the element is different, i is missing
    // 			return i;
    // 		}
    // 	}
    // 	// if all elements are desired, the missing element is n, 
    // 	// which is the size of nums
    // 	return int(nums.size());
    // }



    // faster version----- geometric sequence
    	int sum = int(nums.size())* (int(nums.size()) + 1 )/ 2;
    	int nums_sum = 0;
    	for (int i = 0; i < int(nums.size()); ++i) {
    		nums_sum += nums[i];
    	}
    		return sum - nums_sum;
    }
    // OTHER METHOD : BIT MANIPULATION ---SAVE FOR LATER

};