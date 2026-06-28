class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {              //this is a medium problem of leetcode
        int j = 0;                                                                  //intializing j
        for(int i = m ; i < m + n && j < n; i++){                                   //for loop till i is less than m+n and j is less than n 
            nums1[i] = nums2[j];                                                    //it starts from m to insert the elements
            j++;
        }
        sort(nums1.begin(), nums1.end());                                           //then i sort the array
    }
};
//Commited by Anuj Sen