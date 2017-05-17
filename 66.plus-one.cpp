class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[int(digits.size()) - 1] < 9) {
        	digits[int(digits.size()) - 1] += 1;
        	return digits;

        } else {
        	digits[int(digits.size()) - 1] = 0;
        	int idx = int(digits.size()) - 2;
        	//idx < 0, previous digit < 9
        	while (idx >= 0 && digits[idx] == 9) {
        		digits[idx] = 0;
        		idx--;
        	}
        	if(idx < 0) {
        		vector<int> digit_new(int(digits.size()) + 1, 0);
        		digit_new[0] = 1;
        		return digit_new;
        	}
        	if(digits[idx] != 9) {
        		digits[idx]++;
        	}
        	return digits;
        }
    }
};