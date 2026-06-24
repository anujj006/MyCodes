class Solution {
public:
    bool rotateString(string s, string goal) {          //This is an Easy Problem to Rotate String. Solved By String Method
        if((s + s).contains(goal) == true){             //I Simply concatenated the String and checked if it contains the goal
            return true;                                //Cause when you rotate the string we get our goal inside it
        }
        return false;
    }
}; 
//Commited by Anuj Sen