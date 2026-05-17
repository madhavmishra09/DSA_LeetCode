class NumArray {
    vector<int> p;

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        p.resize(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            p[i] = p[i - 1] + nums[i - 1];
        }
    }

    int sumRange(int left, int right) {
        return p[right + 1] - p[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */