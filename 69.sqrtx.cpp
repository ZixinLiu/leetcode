class Solution {
public:
    int mySqrt(int x) {
    	// newton iterative method
    	if(x == 0) return 0;
    	double temp = x;
    	// handle overflow
    	while(fabs(temp* temp - x) > 0.0001) {
    		temp = (temp + x /temp) / 2;
    	} 
    	return temp;


    	// // binary search method
     //    if (0 == x) return 0;
     //    int left = 1, right = x, ans;
     //    while (left <= right) {
     //        int mid = left + (right - left) / 2;
     //        if (mid <= x / mid) {
     //            left = mid + 1;
     //            ans = mid;
     //        } else {
     //            right = mid - 1;
     //        }
     //    }
     //    return ans;
    
        
    }
};