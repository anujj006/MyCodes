public class Leetcode2124 {
    class Solution {
    public boolean checkString(String s) {
        int i = 0;
        while( i < s.length() &&  s.charAt(i) == 'a'){                  //traverse till 'a's end 
            i++;
        }
        while(i < s.length()){
            if(s.charAt(i) == 'a') return false;                        //if theres a after b then return false
            else i++;
        }
        return true;
    }
}
}
//Commited by Anuj Sen
