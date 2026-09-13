class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {       //easy leetcode problem
        int n = letters.size();                                         

        for(int i = 0; i < n; i++) {                                    //Traverse The Array Till Elememt in Letters[] is Greater Than Target
            if(letters[i] > target)                                     //And Then Return The Element
                return letters[i];
        }

        return letters[0];
    }
};
//Commited by Anuj Sen