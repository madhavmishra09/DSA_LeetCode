class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> s;
        int c=1;
        for(int i:target)
        {
            while(c<i)
            {
                s.push_back("Push");
                s.push_back("Pop");
                c++;   
            }
            s.push_back("Push");
            c++;
        }
        return s;
    }
};