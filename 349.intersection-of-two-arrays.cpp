class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> set_1;
        for(int i = 0; i < int(nums1.size()); ++i) {
        	set_1.insert(nums1[i]);
        }
  
        for(auto it = set_1.begin(); it != set_1.end(); ++it) {
        	if(set_.find(*it) != set_2.end()) {
        		result.push_back(*it);
        	}
        }
        return result;
    }
};