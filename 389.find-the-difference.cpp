class Solution {
public:
    char findTheDifference(string s, string t) {
    	int sum_s = 0;
    	int sum_t = 0;
    	for(int i = 0; i < int(s.size()); ++i) {
    		sum_s += (int) s[i];
    	}
    	for(int i = 0; i < int(t.size()); ++i) {
    		sum_t += (int) t[i];
    	}
    	return ((char)(sum_t - sum_s));
        
    }
};