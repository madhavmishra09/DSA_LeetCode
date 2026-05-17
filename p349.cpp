#include <unordered_set>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        for(int num:nums1)
        {
            set1.insert(num);
        }
        vector<int> result;
        unordered_set<int> seen;
        for(int num:nums2)
        {
            if(set1.count(num)&& !seen.count(num))
            {
                result.push_back(num);
                seen.insert(num);
            }
        }
        return result;
    }
};