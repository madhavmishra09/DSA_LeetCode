class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int a,b;
        a=nums[0]+k;
        b=nums[nums.size()-1]-k;
        return max(0,b-a);
    }
};