class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxC=0;
        int c=0;//counter variable
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                c++;
                maxC=max(maxC,c);
            }
            else
            {
                c=0;
            }
        }
        return maxC;
    }
};