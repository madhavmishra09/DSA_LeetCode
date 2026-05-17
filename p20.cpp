#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch:s)
        {
            if(ch=='('||ch=='{'||ch=='[')
            {
                st.push(ch);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                char top=st.top();
                if(!matching(top,ch))
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
    bool matching(char open,char close)
    {
        return (open=='(' && close==')')||(open=='[' && close==']')||(open=='{' && close=='}');
    }
};