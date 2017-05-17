// Given an array of size n, find the majority element. 
//The majority element is the element that appears more than ⌊ n/2 ⌋ times.
// You may assume that the array is non-empty and the majority element always exist in the array.
class Solution {
public:
    int majorityElement(vector<int>& nums) {

    	// initial thought: about 30 ms, hash table
    	unordered_map<int, int> hash;
    	int result_count = -1;
    	int result = 0; // result always exist, this number is promised to be modified
    	for(int i = 0; i < int(nums.size()); ++i) {
    		hash[nums[i]]++;
    	}
    	for(auto it = hash.begin(); it != hash.end(); ++it) {
    		if(it -> second > floor(int(nums.size()) / 2) && it -> second > result_count) {
    			result = it -> first;
    			result_count =  it -> second;
    		}
    	}
        return result;
    }




};