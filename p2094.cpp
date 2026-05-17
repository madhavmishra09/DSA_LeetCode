class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        bool seen[1000];
        int number=0;
        for(int i=0;i<digits.size();i++)
        {
            if(digits[i]==0)
            {
                continue;
            }
            for(int j=0;j<digits.size();j++)
            {
                if(j==i)
                {
                    continue;
                }
                for(int k=0;k<digits.size();k++)
                {
                    if(k==i || k==j)
                    {
                        continue;
                    }
                    if(digits[k]%2!=0)
                    {
                        continue;
                    }
                    number=digits[i]*100+digits[j]*10+digits[k];
                    seen[number]=true;
                }
            }
        }
        vector<int> result;
        for(int num=100;num<1000;num++)
        {
            if(seen[num])
            {
                result.push_back(num);
            }
        }
        return result;
    }
};