class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
        {
            return false;
        }
        double logVal=log10(n)/log10(3);
        return floor(logVal)==ceil(logVal);
    }
};  