class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        int ws = 0;
        vector<int> res(n, 0);
        if (k == 0){
            return res;
        }
        if (k > 0) {
            for (int i = 1; i <= k; i++) {
                ws += code[i%n];
            }
            for(int i=0;i<n;i++){
                res[i]=ws;
                ws-=code[(i+1)%n];
                ws+=code[(i+k+1)%n];
            }
        }
        else{
            k=abs(k);
            for (int i = 1; i <= k; i++) {
                ws += code[(n-i)%n];
            }
            for(int i=0;i<n;i++){
                res[i]=ws;
                ws-=code[(i-k+n)%n];
                ws+=code[i];
            }
        }
        return res;
    }
};