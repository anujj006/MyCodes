class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0;                                                  //Initalized i
        int j = 0;                                                  //Initalized j
        sort(nums1.begin(), nums1.end());                           //Sorted nums1
        sort(nums2.begin(), nums2.end());                           //Sorted nums2
        while(i < nums1.size() && j < nums2.size()){                //While loop till Any of array is fully traversed
            if (nums1[i] == nums2[j]) {                             //If nums1[i] == nums2[j]
            if (ans.empty() || ans.back() != nums1[i])              //If ans is empty or ans.back() != nums1[i]-->this is condition to make sure the element is not ppushed again
            ans.push_back(nums1[i]);                                //Push the element
            i++;
            j++;
            }
            else if(nums1[i] < nums2[j]){                           //If nums1[i] < nums2[j]
                i++;
            }
            else if(nums1[i] > nums2[j]){                           //If nums1[i] > nums2[j]
                j++; }
        }
        return ans;
    }
};
//Commited by Anuj Sen