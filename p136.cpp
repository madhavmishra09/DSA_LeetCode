class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,j,t=0;
        for(i=0;i<nums.size();i++)
        {
            t^=nums[i];
        }
        return t;
    }
};