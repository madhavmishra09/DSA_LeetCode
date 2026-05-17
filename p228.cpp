class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> summaryRanges;
        int start;
        int i=0;
        while(i<nums.size())
        {
            int start=i;
            while(i+1<nums.size()&&nums[i]+1==nums[i+1])
            {
                i++;
            }
            if(start==i)
            {
                summaryRanges.push_back(to_string(nums[start]));
            }
            else
            {
                summaryRanges.push_back(to_string(nums[start])+"->"+to_string(nums[i]));
            }
            i++;
        }
        return summaryRanges;
    }
};