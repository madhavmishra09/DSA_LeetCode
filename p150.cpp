class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;

        for (int i = 0; i < tokens.size(); i++) {
            string t = tokens[i];

            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int b = st.back(); st.pop_back();
                int a = st.back(); st.pop_back();

                if (t == "+") st.push_back(a + b);
                else if (t == "-") st.push_back(a - b);
                else if (t == "*") st.push_back(a * b);
                else st.push_back(a / b); 
            } 
            else {
                st.push_back(stoi(t));
            }
        }

        return st.back();
    }
};