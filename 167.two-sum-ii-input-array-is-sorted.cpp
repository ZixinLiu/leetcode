class Solution {
public:
	// my initial thought using hash table
	// consider same elements
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int> result;
        // // map intger to its index(0based)
        // map<int, int> hash;
        // for(int i = 0; i < int(numbers.size()); ++i) {
        // 	hash[numbers[i]] = i;
        // }
        // for(auto it = hash.begin(); it != hash.end(); ++it) {
        // 	int second_num = target - it -> first;
        // 	// find the corresponding pair
        // 	auto second_it = hash.find(second_num);
        // 	if(second_it != hash.end()) {
        // 		result.push_back(it -> second + 1);
        // 		result.push_back(second_it -> second + 1);
        // 		break;
        // 	}
        // }
        // // if two same elements are selected as the answer, both of them must be the answers, map will remember the larger index
        // if(result[0] == result[1]) {
        // 	result[0] = result[1] - 1;
        // }
        // return result;


    	// faster version
    	vector<int> result;
    	int l = 0;
    	int r = int(numbers.size() - 1);
    	while(numbers[l] + numbers[r] != target) {
    		if (numbers[l] + numbers[r] < target) {
    			l++;
    		} 
    		else {
    			r--;
    		}
    		
    	}

		result.push_back(l + 1);
		result.push_back(r + 1);
		return result;
    		

    }

};