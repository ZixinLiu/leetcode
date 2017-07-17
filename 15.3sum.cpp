class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(int(nums.size()) < 3) return res;
        // sort the vector before doing sorting
        sort(nums.begin(), nums.end());
        for(int i = 0; i <  int(nums.size()) - 2; ++i) {
            // if this element is same as the last one, we skip the current case, 
            // since we have done the search the this value
            // i > 0 prevents the bad acces
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1;
            int right = int(nums.size()) - 1;
            // why not , for bs, left == right, since bs try to find one number, it may 
            // appear when left == right
            // since we need to find sum of two number, we need different position number
            // if we have left == right, 
            //we might got (2,2) for 4 even if we only have 1 2 in the array
            while(left < right) {
                int currentSum = nums[left] + nums[right];
                int targetSum = 0 - nums[i];
                if(currentSum == targetSum) {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[left]);
                    v.push_back(nums[right]);
                    res.push_back(v);
                    // these two are because that there are more than 1 solution in the current range, 
                    //if we have already find one, we keep find by make left moving left and right moving right 
                    // e.g. 1 2 2 3, find 4, we can find(1,3), then we need to find(2,2)
                    // this is not exactly the binary search, since bs is try to find the answer, if it exist, we return
                    // but now, we need to find all the cases
                    left++;
                    right--;
                    // these two conditions are done to deal with two sum duplicate 1 1 2 2 3, we find (1,3) for the first 1, 
                    //we don't need to do the same thing for the second 1, this is the same as the duplicate when try to find the start outside the while loop
                    // if left = left of left, left++;
                    // right = right 0f right; right--
                    while(nums[left] == nums[left - 1]) left++;
                    while(nums[right] == nums[right + 1]) right--;
                } else if(currentSum < targetSum) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return res;       
    }
};
