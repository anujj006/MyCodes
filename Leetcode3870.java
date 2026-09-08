class Solution {
    public int countCommas(int n) {                             //This is an easy problem of leetcode
        int ans = 0;                                            //First i initialize the variable to store the answer

        for (int x = 1; x <= n; x++) {                          //we initialize a loop from 1 to n
            int t = x;                                          //then i initialize a variable to store the value of x

            while (t >= 1000) {                                 //then t  will be divided by 1000 till it is less than 1000
                ans++;                                          //then ans will be incremented signifyiing a comma
                t /= 1000;                                      //then t will be divided by 1000
            }
        }

        return ans;
    }
};
//Commited by Anuj Sen