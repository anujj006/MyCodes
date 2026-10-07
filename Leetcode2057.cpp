class Solution {
public:
    int smallestEqual(vector<int>& nums) {                        //easy leetcode problem
        int k = INT_MAX;                                          //k inintialised
        for(int i = 0; i < nums.size();i++){
            if(i % 10 == nums[i]) k = min(k, i);                  //if i % 10 == nums[i] then update k
        }
        if(k == INT_MAX) return -1;
        return k;
    }
};
//Commited by Anuj Sen