class Solution {
public:
    char findTheDifference(string s, string t) {            //This Is An Easy Leetcode Problem
        int freq[26] = {0};                                 //Initialized an array which will store frequency
        for(char c : s){                                    //Traverse To increase frequency
            freq[c - 'a']++;
        }
        for(char c : t){                                    //traverse to decrease char in string t
            freq[c - 'a']--;
        }
        for(char c : t){                                    //when char is "-1" then its the character
            if(freq[c - 'a'] == -1){
                return c;
            }
        }
        return ' ';
    }
};
//Commited by Anuj Sen