class Solution {
public:
    int removeDuplicates(vector<int>& nums) {                     //this is an easy problem of leetcode
        for(int i = 1; i < nums.size(); i++){                     //then i iterate through the array
            if(nums[i-1] == nums[i]){                             //if the current element is equal to the previous element
                nums.erase(nums.begin() + i);                     //then i erase the current element
                i--;                                              //Decrement i because  element is deleted we have to start from previous element
            }
        }
        int n = nums.size();
        return n;
    }
};
//Commited by Anuj Sen