class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) {
            return false;
        }
        bool hasVowel = false, hasConsonant = false;
        for (char ch : word) {
            if (!isalnum(ch) && !isdigit(ch)) {
                return false;
            }
            if(isdigit(ch))
            {
                continue;
            }
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                hasVowel = true;
            } else if (isalnum(ch)) {
                hasConsonant = true;
            }
        }
        return hasVowel && hasConsonant;
    }
};