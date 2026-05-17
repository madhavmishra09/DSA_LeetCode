class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long d,rev=0;
        long m=x;
        while(x!=0)
        {
            d=x%10;
            rev=rev*10+d;
            x=x/10;
        }
        if(rev==m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};