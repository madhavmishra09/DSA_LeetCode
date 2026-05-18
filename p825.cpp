class Solution {
public:
    int numFriendRequests(vector<int>& ages) {

        sort(ages.begin(), ages.end());

        int n = ages.size();
        int ans = 0;

        int left = 0;
        int right = 0;

        for (int i = 0; i < n; i++) {

            while (left<n && ages[left] <= 0.5 * ages[i] + 7) {
                left++;
            }

            while (right + 1 < n && ages[right + 1] <= ages[i]) {
                right++;
            }

            if (right >= left) {
                ans += (right - left);
            }
        }

        return ans;
    }
};