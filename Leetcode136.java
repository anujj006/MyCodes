public class Leetcode136 {
    class Solution {
    public int singleNumber(int[] nums) {               //This Is Solution for Single Number Problem
         int ans = 0;                                   //First i initialize the variable to store the answer
        for (int i = 0; i < nums.length; i++){          //Loop to iterate through the array
            ans ^= nums[i];                             //XOR
        }
        return ans;
    }
}
}
//Commited by Anuj Sen
