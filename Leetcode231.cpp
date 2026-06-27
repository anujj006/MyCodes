class Solution {
public:
    bool isPowerOfTwo(int n) {                      //this is an easy problem of leetcode
        int ans;                                    //First i initialize the variable to store the answer
        
        for(int i = 0; i <=30; i++){                //then i iterate through the loop
            ans = pow(2, i);                        //then i used pow function to get exponents of 2    
            if(ans == n) return true;               //if the current element is equal to the previous element
        }
        return false;
    }
};
//Commited by Anuj Sen