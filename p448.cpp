class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n+1,0);
        vector<int> result;
        for(int x=0;x<n;x++)
        {
            freq[nums[x]]=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(freq[i]==0)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};