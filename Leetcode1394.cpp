class Solution {
public:
    int findLucky(vector<int>& arr) {                       //This is an easy problem of leetcode
        int num[501];                                       //We Have To Find An Element That Is Equal To It's Index or its frequency is same as its value in given array
        int ans = -1;                                       //First i initialize the variable to store the answer, and a array used as hash
        for(int i = 0; i < arr.size(); i++){                //we will increase the value of element at that index by 1
            num[arr[i]] += 1;                               //so the number and its frequency can be compared
        }
        for(int j = 1; j < 501; j++){                       //then we will check if the element is equal to its index
            if(num[j] == j){                                //if it is equal
                ans = max(ans, j);                          //then we will update the answer
        }
        }
        return ans;
    }
};
//Commited by Anuj Sen