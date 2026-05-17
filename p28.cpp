class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1=haystack.size();
        int s2=needle.size();
        if(s2==0) return 0;
        for(int i=0;i<=s1-s2;i++)
        {
            int j=0;
            while(j<s2 && haystack[i+j]==needle[j]){
                j++;
            }
            if(j==s2)
            {
                return i;
            }
        }
        return -1;
    }
};