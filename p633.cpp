class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long i=0;(i*i)<=c;i++)
        {
            long long rem=c-(i*i);
            long long j=sqrt(rem);
            if((j*j)==rem){
                return true;
            }
        }
        return false;
    }
};