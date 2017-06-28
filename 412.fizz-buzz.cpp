class Solution {
public:
    vector<string> fizzBuzz(int n) {
    	vector<string> result;
    	for(int i = 1; i <= n; ++i) {
    		// multiple of 3 and 5, which is the multiple of the 15
    		if(i % 15 == 0) {
    			result.push_back("FizzBuzz");
    		} 
    		// multiple of 5
    		else if(i % 5 == 0) {
    			result.push_back("Buzz");
    		} 
    		// multiple of 3 
    		else if(i % 3 == 0) {
    			result.push_back("Fizz");
    		} 
    		// other
    		else {
    			result.push_back(to_string(i));
    		}
    	}
        return result;
    }
};