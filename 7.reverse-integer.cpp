class Solution {
public:
	// intput canbe 32 bits
    int reverse(int x) {
    	long long result = 0;
    	do {
    		// add 0 to current num and add the last disgit of x
    		result = result * 10 + x % 10;
    		x /= 10;
    	} while(x);
    	// int max , int min is build in 
    	if(result > INT_MAX || result < INT_MIN) {
    		return 0;
    	}
    	return result;
    }
};