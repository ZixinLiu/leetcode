class Solution {
public:
	int Help(char c) {
		int res = 0;
		if(c == 'V'){
    		res = 5;
    	}
		else if(c == 'X'){
			res = 10;
		}
		else if(c == 'L'){
			res = 50;
		}
		else if(c == 'C'){
			res = 100;
		}
		else if(c == 'D'){
			res = 500;
		}
		else if(c == 'M'){
			res = 1000;
		}
		else {
			res = 1;
		}
		return res;
	}




    int romanToInt(string s) {
    	int res = 0;
    	for(int i = 0; i < int(s.size()); ++i) {
    		// there is letter after
    		if(i < int(s.size()) - 1) {
    			if(Help(s[i]) >= Help(s[i + 1])) {
    				res += Help(s[i]);
    			} else {
    				// make a pair 
    				res -= Help(s[i]);
    				res += Help(s[i + 1]);
    				// move after current pair
    				++i;
    			}
    		}
    		else {
    			// add the last letter
    			res += Help(s[i]);
    		}
    	}
    	return res;
    }
};