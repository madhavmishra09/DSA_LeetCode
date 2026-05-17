class Solution {
public:
    int calculate(string s) {
        vector<int> st;
        int num = 0;
        char op = '+';   // previous operator
        
        for(int i = 0; i < s.size(); i++) {
            
            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            
            // If operator OR last character
            if((!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1) {
                
                if(op == '+') {
                    st.push_back(num);
                }
                else if(op == '-') {
                    st.push_back(-num);
                }
                else if(op == '*') {
                    int temp = st.back();
                    st.pop_back();
                    st.push_back(temp * num);
                }
                else if(op == '/') {
                    int temp = st.back();
                    st.pop_back();
                    st.push_back(temp / num);
                }
                
                op = s[i];
                num = 0;
            }
        }
        
        int result = 0;
        for(int val : st) {
            result += val;
        }
        
        return result;
    }
};