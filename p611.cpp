class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        for(int k=n-1;k>=2;k--){
            int l=0;
            int r=k-1;
            while(l<r){
                if(nums[l]+nums[r]>nums[k]){
                    c+=(r-l);
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return c;
    }
};