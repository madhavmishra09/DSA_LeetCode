class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int s=0;
        int ans=INT_MAX;
        for(int r=0;r<n;r++){
            s+=nums[r];
            while(s>=target){
                ans=min(ans,r-l+1);
                s-=nums[l];
                l++;
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
};