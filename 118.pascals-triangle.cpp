class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if (numRows == 0) {
            return result;
        }
        vector<int> row;
       	row.push_back(1);
       	result.push_back(row);
        
       	if (numRows == 1) {
            return result;
       	}
        
        for (int i = 1; i < numRows; ++i) {
            vector<int> row;
            row.resize(i + 1);
            for (int j = 0; j < i + 1; ++j) {
                if (j == 0 || j == i) {
                    row[j] = 1;
                } else {
                    row[j] = result[i - 1][j - 1] + result[i - 1][j];
                }
            }
            result.push_back(row);
            
        }
        return result;
    }
};