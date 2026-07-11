class Solution {
public:
    int missingNumber(vector<int>& nums) {              //this is an easy problem named missing number; we have to find out missing number from [0 , n] here n is size of array
        int n = nums.size();                            //initializing n
        sort(nums.begin(), nums.end());                 //sorting
        if(nums[0] != 0) return 0;                      //if first element is not 0 then return 0
        if(nums[n - 1] != n) return n;                  //if last element is not n then return n
        for(int i = 0; i < n ; i++){
            if(nums[i] != i) return i;                  //if current element is not i then return i
            
        }
        return 0;
    }
};
//Commited by Anuj Sen