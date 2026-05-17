#include <string>
#include <unordered_set>
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> rows1 = {'q', 'w', 'e', 'r', 't',
                                     'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> rows2 = {'a', 's', 'd', 'f', 'g',
                                     'h', 'j', 'k', 'l'};
        unordered_set<char> rows3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        vector<string> result;
        int i;
        int length = words.size();
        for (i = 0; i < length; i++) {
            int x = words[i].length();
            string str=words[i];
            char firstChar = tolower(str[0]);
            unordered_set<char>* row = nullptr;
            if (rows1.count(firstChar)) {
                row = &rows1;
            } else if (rows2.count(firstChar)) {
                row = &rows2;
            } else if (rows3.count(firstChar)) {
                row = &rows3;
            }
            bool isValid=true;
            for (int j = 0; j < x; j++) {
                if (!row->count(tolower(str[j]))) {
                    isValid=false;
                    break;
                }
            }
            if(isValid)
            {
                result.push_back(str);
            }
        }
        return result;
    }
};