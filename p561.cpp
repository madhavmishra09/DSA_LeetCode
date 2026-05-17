class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i+=2){
            s+=nums[i];
        }
        return s;
    }
};