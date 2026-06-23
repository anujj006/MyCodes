class Solution {
public:
    void moveZeroes(vector<int>& nums) {                //This Is Solution for Move Zeroes Problem
        int j = 0;                                      //Pointer starting AT 0th index
        for (int i = 0; i < nums.size();i++){           //Loop Iterating till last
            if(nums[i] != 0){                           //If element is not equal to 0
                swap(nums[i] , nums[j]);                //Swap the elements
                j++;                                    //Increment the pointer
            }
        }
    }
};
//Commited by Anuj Sen