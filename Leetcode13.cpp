class Solution {                                        //This is a Easy problem of leetcode
public:                                                 
    int value(char c) {                                 //I Made A Function To Map The Value Of Each Roman Number, I Got to knoe about hashset to do it in optimal way
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int sum = 0;                                                                    //I Made A Variable To Store The Sum

        for (int i = 0; i < s.length(); i++) {                                          //Iterating Through The String
            int curr = value(s[i]);                                                     //Getting The Value

            if (i + 1 < s.length() && curr < value(s[i + 1])) {                         //If The Next Number Is Smaller
                sum -= curr;                                                            //Subtract
            } else {                                                                    
                sum += curr;                                                            //Else Add
            }
        }

        return sum;                                                                     //Return The Sum
    }
};
//Commited by Anuj Sen