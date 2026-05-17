class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(char &c: paragraph){
            if(isalpha(c)){
                c=tolower(c);
            }
            else{
                c=' ';
            }
        }
        unordered_set<string> baset;
        for(auto &word : banned){
            baset.insert(word);
        }
        unordered_map<string,int> freq;
        string word;
        stringstream ss(paragraph);
        while(ss>>word){
            if(baset.find(word)==baset.end()){
                freq[word]++;
            }
        }
        string ans;
        int maxf=0;
        for(auto &it:freq){
            if(it.second>maxf){
                maxf=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};