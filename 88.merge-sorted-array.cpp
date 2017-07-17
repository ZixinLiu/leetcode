class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    	// using 2 queues to add elements to new vector
    	//assign new vector to nums1;
    	// inplace

    	// compare the mac and add the larger one to the bottom of nums1
	    nums1.resize(m + n);
	    int idx_1 = m - 1;
	    int idx_2 = n - 1;
	    int last_idx = m + n - 1;
	    while(idx_1 >= 0 && idx_2 >= 0) {
	    	if(nums1[idx_1] > nums2[idx_2]) {
	    		nums1[last_idx--] = nums1[idx_1--];
	    	} 

	    	else if(nums1[idx_1] < nums2[idx_2]) {
	    		nums1[last_idx--] = nums2[idx_2--];

	    	} else {
	    		nums1[last_idx--] = nums1[idx_1--];
	    		nums1[last_idx--] = nums2[idx_2--];

	    	}
	    	
	    }
	    // when one of them is 0, keep add elements of the non empty vector
	    while(idx_1 >= 0)  nums1[last_idx--] = nums1[idx_1--];

	    while(idx_2 >= 0) nums1[last_idx--] = nums2[idx_2--];

    }
};