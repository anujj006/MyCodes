class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {             //easy problem of lc
        int hash[10000] = {};                           //implemented by hashing
        int n = nums.size() / 2;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        for(int i = 0; i < 10000; i++){
            if(hash[i] == n){
                return i;
            }
        }
        return -1;
    }
};