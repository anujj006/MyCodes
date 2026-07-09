package MyCodes;
class Solution {
    public boolean isPowerOfFour(int n) {               //this is an easyc problem of leetcode 
        for(int i = 0; i < 20; i++){                    //we have to check if the number is a power of 4
            if(n == pow(4, i)){                         //if it is 4^i then return true
                return true;                            
            }
        }
        return false;
    }
}
//Commited by Anuj Sen