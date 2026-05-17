class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0)
        {
            return m*n;
        }
        int mr=m;
        int mc=n;
        int a,b;
        for(auto &op:ops)
        {
            a=op[0];
            b=op[1];
            mr=min(mr,a);
            mc=min(mc,b);
        }
        return mr*mc;
    }
};