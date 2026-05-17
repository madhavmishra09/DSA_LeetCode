class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int expected=1;
        for(int i:nums){
            if(i==expected){
                expected++;
            }
        }
        return expected;
    }
};