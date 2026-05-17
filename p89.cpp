class Solution {
public:
    vector<int> grayCode(int n) {
        int x=0;
        vector<int> result;
        int size=1<<n;
        while(x<size){
            result.push_back(x^(x>>1));
            x++;
        }
        return result;
    }
};