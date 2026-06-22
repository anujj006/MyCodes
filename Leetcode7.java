class Solution {
    public int reverse(int x) {             //This is solution for easy problem on leetcode named Reverse Integer       
        int rev = 0;                        //Here this is reversed integer

        while (x != 0) {                    //While x is not 0
            int digit = x % 10;

            if (rev > Integer.MAX_VALUE / 10 ||                     //If rev is greater than Integer.MAX_VALUE / 10
                (rev == Integer.MAX_VALUE / 10 && digit > 7)) {     //If rev is equal to Integer.MAX_VALUE / 10 and digit is greater than 7
                return 0;                                           //Return 0
            }

            if (rev < Integer.MIN_VALUE / 10 ||                     //If rev is less than Integer.MIN_VALUE / 10
                (rev == Integer.MIN_VALUE / 10 && digit < -8)) {    //If rev is equal to Integer.MIN_VALUE / 10 and digit is less than -8
                return 0;                                           //Return 0
            }

            rev = rev * 10 + digit;                                 //Formula to reverse a number
            x /= 10;                                                //Divide x by 10
        }

        return rev;
    }
}
//Commited by Anuj Sen