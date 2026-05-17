class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title="";
        while(columnNumber>0)
        {
            columnNumber-=1;
            int r=columnNumber%26;
            char c='A'+r;
            title=c+title;
            columnNumber/=26;
        }
        return title;
    }
};