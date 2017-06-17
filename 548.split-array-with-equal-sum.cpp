
class Solution {
public:
    // wether left sum eqaul to right sum
    bool checkequal(int break_idx, int l, int r, vector<int> &nums) {
        int suml = 0;
        int sumr = 0;
        for(int i = l; i < break_idx; ++i) {
            suml += nums[i];
        }
        for(int i = break_idx + 1; i <= r; ++i) {
            sumr += nums[i];
        }
        return(suml == sumr);
    }
    // try to find a break point of a array, return index, return -1 if could not
    int helperfc(int l, int r, vector<int> &nums) {
        for(int i = l + 1; i < r; ++i) {
            if(checkequal(i, l, r, nums)) return i;
        }
        return -1;
    }
    
    bool splitArray(vector<int>& nums) {
        if(nums.size() < 7) return false;
        
        int j = helperfc(0, int(nums.size()), nums);
        if(j == -1) return false;
        
        int i = helperfc(0, j - 1, nums);
        if(i == -1) return false;
        
        int k = helperfc(j + 1, int(nums.size()), nums);
        if(k == -1) return false;
        
        return true;
    }
};
