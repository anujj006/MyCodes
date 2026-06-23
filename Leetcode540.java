public class Leetcode540 {                          //single element in a sorted array
    class Solution {                                //this is a medium problem of leetcode
    public int singleNonDuplicate(int[] nums) { 
        int result = 0;                             //result variable
        for(int i = 0; i < nums.length; i++){       //for loop to take xor of each element, cause xor with itself is 0
            result ^= nums[i];                      //result = result ^ nums[i]
        }
        return result;                              //returning the result
    }
}
}
//Commited by Anuj Sen