class Solution {
public:
    string reverseWords(string s) {
        int n = s.length(); int st = 0;
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') {
                int l = st;
                int r = i- 1;
                while (l < r) {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                }
                st=i+1;
            }
        }
        return s;
    }
};