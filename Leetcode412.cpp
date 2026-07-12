class Solution {
public:
    vector<string> fizzBuzz(int n) {                    //this is a easy problem of leetcode. it doe confused on cpp vector and string library
        vector<string> ans;
        for (int i = 1; i <= n; i++) {                  
            if (i % 3 == 0 && i % 5 == 0)              //if divisible by 3 and 5
                ans.push_back("FizzBuzz");
            else if (i % 3 == 0)                       //if divisible by 3
                ans.push_back("Fizz");
            else if (i % 5 == 0)                        //if divisible by 5
                ans.push_back("Buzz");
            else
                ans.push_back(to_string(i));            //if not divisible by 3 or 5 and converted i to string
        }
        return ans;
    }
};
//Commited by Anuj Sen