class Solution {
public:
    string removeOccurrences(string s, string part) {               //This is an Easy Problem to Remove Occurrences of a Substring from a String.
        while(s.length() > 0 && s.length() > s.find(part)){         //Solved by string methods with while loop
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
//Commited by Anuj Sen