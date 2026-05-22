class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double res=0.0;
        int ws=0;
        for(int i=0;i<k;i++){
            ws+=nums[i];
        }
        int ms=ws;
        for(int i=k;i<n;i++){
            ws+=nums[i];
            ws-=nums[i-k];
            ms=max(ms,ws);
        }
        return (double) ms/k;
    }
};