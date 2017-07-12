class Solution {
public: 
	double powHelp(double x, int n) {
		// recursion, n always back to 0
		if(n == 0) return 1;
		double half = powHelp(x, n / 2);
		if(n % 2 == 0) return half * half;
		return x * half * half;
	}
    double myPow(double x, int n) {
    	// handle positive and negative
    	if(n < 0) {
    		return 1 / powHelp(x, -n);
    	}
 		return powHelp(x, n); 
        
    }
};