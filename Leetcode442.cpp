class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {         //this is a medium problem of leetcode
        vector<int> ans;                                    //First i initialize the vector to store the answer
        sort(nums.begin(), nums.end());                     //then i sort the array
        for(int i = 1; i < nums.size(); i++){               //then i iterate through the array
            if(nums[i] == nums[i-1]){                       //if the current element is equal to the previous element
                ans.push_back(nums[i]);                     //then i push the current element to the vector
            }
        }
        return ans;
}
};
//Commited by Anuj Sen