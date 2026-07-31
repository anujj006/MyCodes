class Solution {
public:
    bool isAnagram(string s, string t) {                //This is an easy problem of leetcode
        int freq1[26] = {0};                            //Initialised two arrays     
        int freq2[26] = {0};

        for(char c : s){
            freq1[c - 'a']++;                           //This loop  will store the frequency of character in string s
        }
        for(char c : t){
            freq2[c - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(freq1[i] != freq2[i]){                   //This loop  will store the frequency of character in string s
                return false;
            }
        }
        return true;
    }
};
//Commited by Anuj Sen