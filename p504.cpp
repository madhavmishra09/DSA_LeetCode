#include <string>
class Solution {
public:
    string convertToBase7(int num) {
        int d7;
        if(num==0)
        {
            return "0";
        }
        bool isNegative=num<0;
        num=abs(num);
        string result="";
        while(num!=0)
        {
            d7=num%7;
            result=to_string(d7)+result;
            num/=7;
        }
        return isNegative?"-"+result:result;
    }
};