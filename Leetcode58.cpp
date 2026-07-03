class Solution {
public:
    int lengthOfLastWord(string s) {                    //this is an easy problem of leetcode
        int count = 0;                                  //intiializing count
        int i = s.size() - 1;
        while(i >= 0 && s[i] == ' '){                   //Loop To find the last word And neglect Spaces
            i--;
        }
        while(i >= 0 && s[i] != ' ')                    //Loop to find the last word length
        {
            count++;
            i--;        
        }
        return count;
    }
};
//Commited by Anuj Sen