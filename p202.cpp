#include <set>
class Solution {
public:
    bool isHappy(int n) {
        int d;
        set<int> seen;
        while(n!=1)
        {
            int s=0;
            if(seen.count(n))
            {
                return false;
            }
            seen.insert(n);
            while(n>0)
            {
                d=n%10;
            s=s+d*d;
            n=n/10;
            }           
            n=s;
        }
        return true;
    }
};