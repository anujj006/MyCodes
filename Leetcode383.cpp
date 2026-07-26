class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {                             //This is An Easy Problem 
        int freq[26] = {0};                                                             //Intialised An Array For 26 Alphabets

        for(char c : magazine){                                                         //Traverse To Store Any Alphabet Present In Magazine
            freq[c - 'a']++;
        }

        for(char c : ransomNote){                                                       //Loop To Decrease The Alphabet Or Use It In RansomNote
            if(freq[c - 'a'] == 0){                                                     //IF Alphabet Not Present Return False
                return false;
            }
            freq[c - 'a']--;                                                            //Use It
        }
        return true;
    }
};
//Commited by Anuj Sen