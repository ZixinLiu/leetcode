class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (int(nums.size()) == 0 ||  r * c != int(nums.size()) * int(nums[0].size())) {
            return nums;
        }
        else {
            // initialize 2 d vector, otherwise there will be a bad access
            vector<vector<int>> result(r, vector<int>(c, 0));
            // count how many number so far, transfer to 1d array
            int count = 0;
            // loop through the nums and transfer it to 1d array
            for (int i = 0; i < int(nums.size()); ++i) {
                for (int j = 0; j < int(nums[0].size()); ++j) {
                    result[count / c][count % c] = nums[i][j];
                    // 1d array match the nums
                    count++;
                }
            }
            return result;
        }
        
    }
};