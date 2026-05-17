#include <set>
class Solution {
public:
    int addDigits(int num) {
        set<int> seen;
        while(num>=10)
        {
            if(seen.count(num))
            {
                break;
            }
        seen.insert(num);
        int s=0;
        int n=num;
            while(n>0)
            {
                int d=n%10;
                s=s+d;
                n=n/10;
            }
            num=s;
        }
        return num;
    }
};