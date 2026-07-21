class Solution {
public:
    int search(vector<int>& nums, int target) {                 //this is an easy problem on binary search
        int n = nums.size() - 1;
        int low  = 0;
        int high = n;
        int mid;
        while(low <= high){
            mid = (low + high) / 2;
            if (target == nums[mid]) return mid;
            if(target > nums[mid]){
                low = mid + 1;
            } 
            if(target < nums[mid]){
                high = mid - 1;
            }
        }
        return -1;
    }
};
//Commited by Anuj Sen