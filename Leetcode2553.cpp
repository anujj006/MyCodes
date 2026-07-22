class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {            //this is an easy problem of leetcode
        vector<int> ans;                                
        for(int i = 0; i < nums.size(); i++){       
            int prev = 0;
            vector<int> temp;                                  //intitializing temporary vector
            while(nums[i] != 0){                               //loop to get each digit
                prev = nums[i] % 10;
                nums[i] /= 10;
                temp.push_back(prev);                          //puushed to temp vector
                
            }
            reverse(temp.begin(), temp.end());                 //reversed
            for (int d : temp)
                ans.push_back(d);                              //pushed to ans
        
        }
        return ans;
    }
};