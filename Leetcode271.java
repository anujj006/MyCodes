import java.util.Arrays;

public class Leetcode271 { 
    public boolean containsDuplicate(int[] nums) {
                                                           //there are two methods to solve this problem one is by nested loops bt it will be TLE for Big Arrays             
        Arrays.sort(nums);                                 //we will use sorting method here, use this templated method to sort array 
        for(int i = 1; i < nums.length; i++){           
            if(nums[i] == nums[i-1]){                      //simple logic to compare element with its predecessor                 
                return true;                               
            }
        }
        return false;
    }
} 
//Commited by Anuj Sen