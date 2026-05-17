class Solution {
public:
    string toHex(int num) {
        if(num==0)
        {
            return "0";
        }
        string hexChars="0123456789abcdef";
        string result="";
        unsigned int unsigned_num=(num&0xFFFFFFFF);
        while(unsigned_num>0)
        {
            int digit=unsigned_num%16;
            result+=hexChars[digit];
            unsigned_num/=16;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};