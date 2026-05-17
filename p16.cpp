class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i, l, r;
        int s1=nums[0]+nums[1]+nums[2], s2 = 0;
        int n = nums.size();
        for (i = 0; i < n - 2; i++) {
            l = i + 1;
            r = n - 1;
            while (l < r) {
                s2 = nums[i] + nums[l] + nums[r];
                if (abs(s2 - target) < abs(s1 - target)) {
                    s1 = s2;
                }
                if (s2 < target) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        return s1;
    }
};