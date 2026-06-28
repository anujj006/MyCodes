class Solution {
public:
    int removeElement(vector<int>& nums, int val) {         //this is an easy problem of leetcode
        int i = 0;                                          //Initalized i
        while(i < nums.size()){                             //While loop till any of the array is fully traversed
             if(nums[i] == val){                            //If nums[i] == val
                nums.erase(nums.begin() + i);               //Erase the element 
                i--;                                        //Decrement i because  element is deleted we have to start from previous element
            }
            i++;                                            //Increment i
        }
        
        int n = nums.size();
        return n;
    }
};
//Commited by Anuj Sen