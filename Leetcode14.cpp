class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {                                //this is an easy problem of leetcode
        string ans;                                                                                 
        bool same = true;   
        for (int i = 0; i < strs[0].size(); i++) {                                    //loop till each string  
            char c = strs[0][i];                                                      //character of first string
            for (int j = 1; j < strs.size(); j++) {                                   //loop till each string  
                if (i >= strs[j].size() || strs[j][i] != c) {                         //if character of any string is not equal to character of first string and char mismatch      
                    same = false;                                                     //break 
                    break;
                }
            }
            if (!same)                                                                //if char mismatch
                return ans;                                                           //return ans
                                                                                      //else
            ans += c;                                                                 //add character to ans
        }
        return ans;
    }
};
//Commited by Anuj Sen