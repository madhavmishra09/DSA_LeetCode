class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans=0;
        for(int bit=0;bit<32;bit++)
        {
            int c=0;
            for(int x:nums)
            {
                if((x>>bit)&1)
                {
                    c++;
                }
            }
            if(c>=k)
            {
                ans|=(1<<bit);
            }
        }
        return ans;
    }
};