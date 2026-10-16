class Solution {
public:
    int percentageLetter(string s, char letter) {                               //Hash Array Solution
        int hash[26] = {0};
        for(char c : s){
            hash[c - 'a']++;
        }
        return ((hash[letter - 'a']  * 100) / s.length());
    }
};
//Commited by Anuj Sen