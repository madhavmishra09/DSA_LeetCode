class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0,odd=0,index=0;
        while(n>0)
        {
            if((n&1)==1)
            {
                if(index%2==0)
                {
                    even+=1;
                }
                else
                {
                    odd+=1;
                }
            }
            n>>=1;
            index+=1;
        }
        return {even,odd};
    }
};