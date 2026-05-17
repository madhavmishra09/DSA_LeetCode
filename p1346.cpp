#include <set>
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;
        for(int v:arr)
        {
            if(seen.count(v*2)||(v%2==0 && seen.count(v/2)))
            {
                return true;
            }
            seen.insert(v);
        }
        return false;
    }
};