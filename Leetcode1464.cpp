class Solution {
public:
    int maxProduct(vector<int>& nums) {                         //this is a easy problem of leetcode
         int max1 = 0;                                          //intializing max
        for(int i = 0; i < nums.size(); i++){                   //for loop
            for(int j = i + 1; j < nums.size(); j++){           //for loop
                max1 = max((nums[i]-1)*(nums[j]-1), max1);      //assign max to max1
            }
        }
           return max1;
    }
};
//Commited by Anuj Sen