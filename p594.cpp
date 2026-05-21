class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(mp.find(it.first+1)!=mp.end()){
                c=mp[it.first]+mp[it.first+1];
                ans=max(c,ans);
            }
        }
        return ans;
    }
};