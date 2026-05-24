class Solution {
public:
    int longestSubstring(string s, int k) {

        int n = s.length();
        int ans = 0;

        // target unique characters
        for(int target = 1; target <= 26; target++) {

            vector<int> freq(26, 0);

            int left = 0;
            int right = 0;

            int uniqueChars = 0;
            int charsAtLeastK = 0;

            while(right < n) {

                // expand window
                int idx = s[right] - 'a';

                if(freq[idx] == 0)
                    uniqueChars++;

                freq[idx]++;

                if(freq[idx] == k)
                    charsAtLeastK++;

                // shrink window
                while(uniqueChars > target) {

                    int leftIdx = s[left] - 'a';

                    if(freq[leftIdx] == k)
                        charsAtLeastK--;

                    freq[leftIdx]--;

                    if(freq[leftIdx] == 0)
                        uniqueChars--;

                    left++;
                }

                // valid window
                if(uniqueChars == target &&
                   uniqueChars == charsAtLeastK) {

                    ans = max(ans, right - left + 1);
                }

                right++;
            }
        }

        return ans;
    }
};