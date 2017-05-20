class Solution {
public:
    string reverseString(string s) {
    	// stack<char> st;
     //    for(int i = 0; i < int(s.length()); ++i) {
     //    	st.push(s[i]);
     //    }
     //    for(int i = 0; i < int(s.length()); ++i) {
     //    	s[i] = st.top();
     //    	st.pop();
     //    }
     //    return s;

    	int l = 0;
    	int r = s.length() - 1;
    	while(l < r) {
    		swap(s[l], s[r]);
    		l++;
    		r--;
    	}

    	return s;
    }
};