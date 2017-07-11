class Solution {
public:
    void reverseWords(string &s) {
    	stringstream ss(s);
    	string str;
    	// when you insert a stream to a str, the content of a string is replaced
    	// s is clear at this time
    	ss >> s;
    	while(ss >> str) {
    		s = str + " " + s;
    	}

    	// s may be "   ", empty string should be returned
    	if(!s.empty() && s[0] == ' ') s = "";
    }
};