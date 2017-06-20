class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
     // nums element with their corresponding next greater, if couldnt find, no such key
     unordered_map<int, int> hash;
     stack<int> s;
     vector<int> result;
     // put all elements in nums to hash table
     for(int i = 0; i < int(nums.size()); ++i) {
     	while(!s.empty() && nums[i] > s.top()) {
     		hash[s.top()] = nums[i];
     		s.pop();
     	}
     	s.push(nums[i]);
     }

     for(int i = 0; i < int(findNums.size()); ++i) {
     	if(hash.find(findNums[i]) ==  hash.end()) {
     		result.push_back(-1);
     	} else {
     		result.push_back(hash[findNums[i]]);
     	}
     }
     return result;

    }
};