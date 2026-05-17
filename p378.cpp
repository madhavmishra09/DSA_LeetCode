class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int low = matrix[0][0];
        int high = matrix[n - 1][n - 1];

        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0;

            // count elements <= mid
            for (int i = 0; i < n; i++) {
                int left = 0, right = n - 1;
                while (left <= right) {
                    int m = left + (right - left) / 2;
                    if (matrix[i][m] <= mid)
                        left = m + 1;
                    else
                        right = m - 1;
                }
                count += left; // number of elements <= mid in row i
            }

            if (count < k)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }
};