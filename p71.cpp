class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string temp;
        stringstream ss(path);
        while (getline(ss, temp, '/')) {
            if (temp == "" || temp == ".") {
                continue;
            } 
            else if (temp == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            }
            else {
                    st.push(temp);
                }
        }
        vector<string> dirs;
        while (!st.empty()) {
            dirs.push_back(st.top());
            st.pop();
        }
        reverse(dirs.begin(), dirs.end());
        string ans = "";
        for (string dir : dirs) {
            ans += '/' + dir;
        }
        return ans.empty() ? "/" : ans;
    }
};