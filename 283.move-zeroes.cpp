class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	// queue<int> q;
    	// int count = 0;
    	// vector<int> result;
    	// for(int i = 0 ; i < int(nums.size()); ++i) {
    	// 	q.push(nums[i]);
    	// }
    	// while(!q.empty()) {
    	// 	int temp;
    	// 	temp = q.front();
    	// 	q.pop();
    	// 	if(temp == 0) {
    	// 		count++;
    	// 	} else {
    	// 		result.push_back(temp);
    	// 	}
    	// }
    	// for(int i = 0;  i< count; ++i) {
    	// 	result.push_back(0);
    	// }
    	// for(int i = 0; i < int(result.size());++i) {
    	// 	nums[i] = result[i];
    	// }
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////
        int zero_idx = 0;
        while(nums[zero_idx] != 0) {
            zero_idx++;
            // may out of bound here
            if(zero_idx == int(nums.size())) break;
        }

        int non_zero_idx = zero_idx;
        while(nums[non_zero_idx] == 0) {
            non_zero_idx++;
            // may out of bound here
            if(non_zero_idx == int(nums.size())) break;
        }
    
        
        while(zero_idx < int(nums.size()) && non_zero_idx < int(nums.size()) && zero_idx < non_zero_idx) {
            swap(nums[zero_idx], nums[non_zero_idx]);
            
            while(nums[non_zero_idx] == 0) {
                non_zero_idx++;
                if(non_zero_idx == int(nums.size())) break;
            }
            while(nums[zero_idx] != 0) {
                zero_idx++;
                if(zero_idx == int(nums.size())) break;
            }
        }

    }
};