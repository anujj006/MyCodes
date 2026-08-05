class Solution {
    public int[] twoSum(int[] nums, int target) {  //This Is Solution for TwoSum Problem
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {     //here just simple nested loops are iterated to find the target
                if (nums[i] + nums[j] == target) {
                    return new int[]{i, j};                 //returning the indexes(in form of array)
                }
            }
        }
        return new int[]{};
    }
}    
//Commited by Anuj Sen
