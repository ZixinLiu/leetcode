class Solution {
public:
    int maxArea(vector<int>& height) {
    	int l = 0;
    	int r = int(height.size()) - 1;
    	int current_max = (r - l) * min(height[l], height[r]);
    	int temp_move;
    	if(height[l] > height[r]) {
    		temp_move = r;
    	} else {
    		temp_move = l;
    	}
    	while(l < r) {
    		// always the min height
    		if(temp_move == l) {
    			l = l + 1;
    		} else {
    			r = r - 1;
    		}
    		int tempArea = (r - l) * min(height[l], height[r]);
    		if(tempArea > current_max) current_max = tempArea;

    		if(height[l] >= height[r]) {
                temp_move = r;
            } else {
                temp_move = l;
            }

    	}
    	return current_max;
        
    }
};