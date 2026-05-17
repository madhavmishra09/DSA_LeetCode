class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        long long expectedSum=(long long)n*(n+1)/2;
        long long expectedSquareSum=(long long)(n*(n+1)*(2LL*n+1))/6;
        long long actualSum=0;
        long long actualSquareSum=0;
        for(int num:nums)
        {
            actualSum+=num;
            actualSquareSum+=num*num;
        }
        long long deltaS=actualSum-expectedSum;
        long long deltaP=actualSquareSum-expectedSquareSum;
        long long sumDM=deltaP/deltaS;
        int duplicate=(deltaS+sumDM)/2;
        int missing=sumDM-duplicate;

        return{duplicate,missing};
    }
};