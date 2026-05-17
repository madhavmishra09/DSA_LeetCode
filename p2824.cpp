class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int c=0;
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            if((nums[l]+nums[r])<target)
            {
                c+=(r-l);
                l++;
            }
            else 
            {
                r--;
            }
        }        
        return c;
    }
};