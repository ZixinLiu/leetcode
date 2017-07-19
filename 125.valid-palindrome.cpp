class Solution {
public:
    bool isPalindrome(string s) {
    	if(s.empty()) return true;
    	
    	// amke the string without space between
    	string modified_str = "";
    	stringstream ss(s);
    	string temp;
    	while(ss >> temp) {
    		modified_str += temp;
    	}
    	int i = 0;
    	// convert all leeter to lower case
    	while(temp[i]) {
    		temp[i] = tolower(temp[i]);
    		++i;
    	}

    	int left = 0;
    	int right = int(temp.length()) - 1;

    	while(left < right) {
    		// if they are not small letter skip move to the next
            while(temp[left] < 97 || temp[left] > 122) {
                left++;
                if(left > right) return true;
            }
            while(temp[right] < 97 || temp[right] > 122) {
                right--;
                if(left > right) return true;
            }
            // they may be out of bound here, make them go to the next iteration        
            if(temp[left] != temp[right]) {
                return false;
            }
    		left++;
    		right--;
    	}
    	return true;
    }
};