class Solution {
    public void reverseString(char[] s) { //This is an Easy Problem to Reverse An String. Solved By Two Pointers
        int st = 0;                       //start pointer
        int e = (s.length - 1);           //end pointer
        while (st < e){                   //Till start pointer is less than end pointer 
            char t = s[st];
            s[st] = s[e];
            s[e] = t;
            st++;
            e--;
        }
        System.out.print(s);
    }
}
//Commited by Anuj Sen