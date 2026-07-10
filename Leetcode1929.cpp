class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {           //this is an simple  question of concatenation
        vector<int> ans;                                        ///here this is much off a brute force
        for(int num : nums){                                    //i just double printed the array
            ans.push_back(num);
        }
          for(int num : nums){
            ans.push_back(num);
        }
        return ans;
    }
};
//Commited by Anuj Sen