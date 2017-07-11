class Solution {
public:
    int mySqrt(int x) {
    	// // newton iterative method
    	// if(x == 0) return 0;
    	// double temp = x;
    	// // handle overflow
    	// while(fabs(temp * temp - x) > 0.0001) {
    	// 	temp = (temp + x /temp) / 2;
    	// } 
    	// return temp;


    	// // binary search method
        if (0 == x) return 0;
        
        // if we keep left = 0, when we have x = 0, we divide by 0, runtime error
        int left = 1, right = x;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            // since sqrt of 5 and other, never equal, merge < = condiition
            if (mid <= x / mid) {
                left = mid + 1;
                //ans = mid;
            } else {
                right = mid - 1;
            }
        }
        // left always keep the biggest integer whose square is closest to x
        // the reason is minus 1 is that, the last step of while loop is add 1 to left
        // so that left could greater than right, therefore a step backwards is th answer
        return left - 1;
        
    }
};