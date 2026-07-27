class Solution {
public:
    int maximumProduct(vector<int>& nums) {                                                 //this is an easy problem of leetcode
    sort(nums.begin(), nums.end());                                                         //sorting the vector
    int n = nums.size();
    int m = max(nums[0] * nums[1] * nums[n-1], nums[n-1] * nums[n-2] * nums[n-3]);          //if array have -ve elements then first two element and last element willl make max product
    return m;                                                                               //and if array have +ve elements then last three elements will make max product
    }
};
//Commited by Anuj Sen