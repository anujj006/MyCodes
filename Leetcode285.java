public ${1|class Leetcode285,,interface Leetcode285,,enum Leetcode285,,record Leetcode285,(),abstract class Leetcode285,,@interface Leetcode285,|} {
    class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
                int count = 0;                                      //intiializing count
        int maxc = 0;                                               //intiializing max

        for (int num : nums) {                                      //for loop
            if (num == 1) {                                         //if num is 1
                count++;                                            //count++
                maxc = Math.max(maxc, count);                       //updating max
            } else {
                count = 0;                                          //Reset count if not consecutive
            }
        }

        return maxc;
    }
}
}
//Commited by Anuj Sen