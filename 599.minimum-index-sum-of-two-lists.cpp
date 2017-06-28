class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> hash_1;
        unordered_map<string, int> hash_2;
        for(int i = 0; i < int(list1.size()); ++i) {
        	hash_1[list1[i]] = i;
        }
        for(int  i = 0; i < int(list2.size()); ++i) {
        	hash_2[list2[i]] = i;
        }

        map<int, vector<string>> map;
        for(auto it = hash_1.begin(); it != hash_1.end(); ++it) {
        	if(hash_2.find(it -> first) != hash_2.end()) {
        		map[it -> second + hash_2[it -> first]].push_back(it -> first);
        	}
        }
        return map.begin() -> second;
    }
};