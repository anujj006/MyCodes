class Solution {
    public boolean isPalindrome(int x) {     //This is solution for easy problem on leetcode named Palindrome Number
        int prev = 0;                        //Here tihs is last digit of integer we will extract
        int rev = 0;                         //Here this is reversed integer
        int dup = x;                         //Here this is duplicate of x variable compare it after reversing    
        if(x < 0) return false;
        while(x > 0){
            prev = x % 10;
            rev = (rev * 10) + prev;        //Formula to reverse a number;
            x = x / 10;
        }
        if (dup== rev){
            return true;
        }
        return false;
    }
}
//Commited by Anuj Sen