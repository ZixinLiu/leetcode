class Solution {
public:
    int strStr(string haystack, string needle) {

    	//  corner case, when the needle is null, 
    	//null is always the subset of haystack, no matter haystack is null or not
    	if(needle == "")  return 0;
    	// don't have to check the whole length of heystack
        for(int i = 0;  i <= int(haystack.size()) - int(needle.size()); ++i) {
        	// when the first letter matches
        	if(haystack[i] == needle[0]) {
        		bool match = true;
        		for(int j = 0; j < int(needle.size()); ++j) {
        			if(haystack[i + j] != needle[j]) {
        				match = false;
        				break;
        			}
        		}
        		if(match) return i;
        	}
        }
        return -1;
    }
};