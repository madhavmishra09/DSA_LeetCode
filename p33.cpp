class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int> cp = nums;

        sort(cp.begin(), cp.end());

        int l = 0, r = cp.size() - 1;
        int c = -1;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (cp[mid] == target) {
                c = mid;
                break;
            }
            else if (cp[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        if (c == -1) return -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == cp[c])
                return i;
        }

        return -1;
    }
};