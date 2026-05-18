class Solution {
public:
    int next(vector<int>& nums, int i, bool forward) {
        int n = nums.size();

        // direction check BEFORE moving
        if ((nums[i] > 0) != forward) return -1;

        int nxt = ((i + nums[i]) % n + n) % n;

        // self loop check
        if (nxt == i) return -1;

        return nxt;
    }

    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int slow = i;
            int fast = i;
            bool forward = nums[i] > 0;

            while (true) {
                slow = next(nums, slow, forward);
                if (slow == -1) break;

                fast = next(nums, fast, forward);
                if (fast == -1) break;

                fast = next(nums, fast, forward);
                if (fast == -1) break;

                if (slow == fast) return true;
            }
        }
        return false;
    }
};