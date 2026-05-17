class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator==0) return "0";
        string ans="";
        if((numerator<0)^(denominator<0)){
            ans+="-";
        }
        long num=labs((long)numerator);
        long den=labs((long)denominator);
        ans+=to_string(num/den);
        long rem=num%den;
        if(rem==0) return ans;
        ans+=".";
        unordered_map<long,int> mp;
        while(rem!=0){
            if(mp.count(rem)){
                ans.insert(mp[rem],"(");
                ans+=")";
                break;
            }
            mp[rem]=ans.size();
        rem*=10;
        ans+=to_string(rem/den);
        rem%=den;
        }
        return ans;
    }
};