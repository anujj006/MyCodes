class Solution {
public:
    int removeDuplicates(vector<int>& nums) {                   //this is an easy problem of leetcode
        for(int i = 1; i < nums.size(); i++){                   //for loop to iterate through the array
            if(nums[i-1] == nums[i]){                           //if the current element is equal to the previous element
                nums.erase(nums.begin() + i);                   //then i erase the element
                i--;                                            //decrement i
            }
        }
        int n = nums.size();
        return n;
    }
};
//Commited by Anuj Sen//Commited by Anuj Sen