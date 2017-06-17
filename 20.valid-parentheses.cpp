class Solution {
public:
    bool isValid(string s) {
    	if(s.length() % 2 == 1) return false;
    	stack<char> st; 
    	for(int i = 0; i < int(s.length()); ++i) {
    		//{,[,(
    		if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
    			st.push(s[i]);
    		}
    		// },],)
    		else {
    			// if the stack is empty
    			if(st.empty()) return false;

    			// if the top does not match the right part
    			else if (s[i] == ')' && st.top() != '(') return false;
    			else if (s[i] == '}' && st.top() != '{') return false;
    			else if (s[i] == ']' && st.top() != '[') return false;

    			// if the top match the right part
    			else {st.pop();}
    		}
    	}
    	return (st.empty());
    }
};