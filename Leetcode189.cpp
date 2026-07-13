class Solution {
public:
    void rotate(vector<int>& nums, int k) {                         //how is this a easy problemm!!!!!!
        int n = nums.size();
        k %= n;                                                     //very important!! this indicates rotation works in a cyclic way means rotating a array 7 times is same as doinng by 3
        int i = 0;                                                  //now we have to do k rotations its same as k % n
        int j = nums.size() - 1;
        while (i < j) {                                             //first rotate the whole array
            swap(nums[i++], nums[j--]);
        }
        i = 0;
        j = k-1;
        while (i < j) {                                             //now rotate first k elements
            swap(nums[i++], nums[j--]);
        }
        i = k ;
        j = nums.size() - 1;
        while (i < j) {                                             //now rotate remaining elements
            swap(nums[i++], nums[j--]);
        }
        
    }
};