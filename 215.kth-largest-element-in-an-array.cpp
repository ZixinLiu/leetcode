class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int> mypq;
      	for(int i = 0; i < int(nums.size()); ++i) {
      		mypq.emplace(nums[i]);
      	}
      	for(int i = 0 ; i < k - 1; ++i) {
      		mypq.pop();
      	}
      	return mypq.top();
    }

    // This can be solved using multiset, multiset and priority queue are default to be max(less<>)
};