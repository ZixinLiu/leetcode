class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    	// My initial work using hash table with extra memory
    	// unordered_map<int, int> hash;
     //    vector<int> solution;
     //    for (int i = 0; i < int(nums.size()); ++i) {
     //        hash[nums[i]]++;
     //    }
     //    for (int i = 1; i <= int(nums.size()); ++i) {
     //        if (hash.find(i) == hash.end())
     //        {
     //            solution.push_back(i);
     //        }
     //    }
     //    return solution
    	vector<int> result;
    	for (int i = 0; i < int(nums.size()); ++i) {
    		// if the content has been modified to negative, it means its index puls 1 has been visited
    		int key = abs(nums[i]);
    		if (nums[key - 1] > 0) {
    			nums[key - 1] = - nums[key - 1];
    		}
    	}

    	for (int i = 0; i < int(nums.size()); ++i) {
    		if (nums[i] > 0) {
    			result.push_back(i + 1);
    		}
    	}
    	return result;
    }

};