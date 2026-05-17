class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }
        int l=0;
        bool odd=false;
        for(auto it:mp){
            int f=it.second;
            if(f%2==0){
                l+=f;
            }
            else{
                l+=f-1;
                odd=true;
            }
        }
        if(odd){
            l+=1;
        }
        return l;
    }
};