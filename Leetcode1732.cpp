class Solution {
public:
    int largestAltitude(vector<int>& gain) {                    //easy leetcode  problem
        vector<int> ans;                                        //initialised a vector
        int k = 0;
        for(int i = 0; i < gain.size(); i++){
            ans.push_back(k);                                   //push k to vector
            k += gain[i];                                       //pdate k as k = k + gain[i]
        }
        ans.push_back(k);                                       //for inserting the last element
        int maxi = *max_element(ans.begin(), ans.end());        //max of vector
        return maxi;
    }
};
//Commited by Anuj Sen