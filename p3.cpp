class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int start=0;
        int length=0;
        int last=0;
        for(int i=0;i<s.size();i++){
            if((mp.find(s[i]) != mp.end())&&(mp[s[i]]>=start)){
                last=mp[s[i]];
                start=max(start,last+1);
            }
            mp[s[i]]=i;
            length=max(length,i-start+1);
        }
        return length;
    }
};