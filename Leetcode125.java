public class Leetcode125 {
    class Solution {
    public boolean isPalindrome(String s) {                         //valid palindrome problem
        String fixed = "";                                          //New String initiated to get fixed string without special characters 
        for(char c : s.toCharArray()){                              //iterating through the string
            if(Character.isLetter(c) || Character.isDigit(c)){      //checking if the character is a letter or a digit
                fixed += c;                                         //adding the character to the new string
            }
        }
        fixed = fixed.toLowerCase();                                //converting the string to lowercase
        int st = 0;                                                 //start pointer
        int e = fixed.length() - 1;                                 //end pointer

        while(st <= e){
            if(fixed.charAt(st) != fixed.charAt(e)){                //checking if the character at start pointer is not equal to the character at end pointer
                return false;
            }
            st++;
            e--;
        }

        return true;
    }
}
//Commited by Anuj Sen