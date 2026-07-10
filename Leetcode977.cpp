class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {               //this is a easy problem of leetcode
        for(int i = 0; i < nums.size(); i++){                    //for loop
            nums[i] = pow(nums[i], 2);                           //square
        }
        sort(nums.begin(), nums.end());                          //sort   
        return nums;
    }
};
//Commited by Anuj Sen