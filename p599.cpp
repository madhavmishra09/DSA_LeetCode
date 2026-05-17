class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1,
                                  vector<string>& list2) {
        unordered_map<string, int> mp;
        vector<string> result;
        int sum = 0;
        int min = INT_MAX;
        for (int i = 0; i < list1.size(); i++) {
            mp.insert({list1[i], i});
        }
        for (int j = 0; j < list2.size(); j++) {
            if (mp.find(list2[j]) != mp.end()) {
                sum = mp[list2[j]] + j;
                if (sum < min) {
                    min = sum;
                    result.clear();
                    result.push_back(list2[j]);
                } else if (sum == min) {
                    result.push_back(list2[j]);
                }
            }
        }
        return result;
    }
};