class Solution {
    public int[] plusOne(int[] digits) {        //this is an easy problem of Leetcode, here my first approach was to convert 
               int a = 0;                       //array to number and then convert it to array again. but that was not optimal solution. 
                                                //so here we iterate to every element and add up one to it and return the array.
        int n = digits.length;
        for (int i = n-1; i >=0 ; i--){         //here we point to end of element in the array and add one to it
            if(digits[i] < 9){                  //if digit is less than 9 then we add 1 & return the array
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;                      //if digit is equal to 9 then assign 0 and loops start again
        }
        int[] newArr = new int[n+1];            //if all digits are 9 then we create new array of size n+1
        newArr[0] = 1;                          //and assign 1 to first element
        return newArr;
        
        
    }
}
//Commited by Anuj Sen