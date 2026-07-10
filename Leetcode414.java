class Solution {
    public int thirdMax(int[] nums) {                                //this is an easy problem of leetcode
        long max1 = Long.MIN_VALUE;                                  //we will assign long cause of these two diff case [1,2,INT_MIN] & [1,1,2]
        long max2 = Long.MIN_VALUE;                                  //here in one case there dosnt exist any third max & for other theres a third max
        long max3 = Long.MIN_VALUE;                                  //so if there is int min in array then case on line 19 can work
        
        for(int i = 0; i < nums.length; i++){                        //for loop to get m1
           max1 = Math.max(max1, nums[i]);
        }
           for(int i = 0; i < nums.length; i++){                     //for loop to get m2
            if(nums[i] == max1) continue;
           max2 = Math.max(max2, nums[i]);
        }
        // if(nums.length == 2) return max1;
           for(int i = 0; i < nums.length; i++){                     //for loop to get m3
            if(nums[i] == max1 || nums[i] == max2) continue;
           max3 = Math.max(max3, nums[i]);
        }
        if(max3 == Long.MIN_VALUE ) return (int)max1;                //if there is no third max then return m1
        return (int)max3;                                            //else return m3 with type conversion
    }
}
//Commited by Anuj Sen
