public class Leetcode3550 {
    class Solution {
    public int smallestIndex(int[] nums) {                      //this is a easy problem of leetcode
        int prev = 0;                                           //prev will store last digit
        int freq = -1;                                          //freq will store frequency

        for(int i = 0; i < nums.length; i++){                   //for loop
            int sum = 0;                                        //sum will store sum
            while(nums[i] > 0){     
                prev = nums[i] % 10;                            //Algorithm To get sum of digits
                nums[i] /= 10;
                sum += prev;
            }
            if(sum == i){                                       //if sum is equal to index
                freq = i;                                       //freq will be index
                break;
            }
        }
        return freq;
    }
}
}
//Commited by Anuj Sen
