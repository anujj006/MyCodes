public class Leetcode387 {
    class Solution {
    public int firstUniqChar(String s) {                    //This is an Easy Problem
        int[] freq = new int[26];                           //done by hashing, initailize an hash array
        for(char c : s.toCharArray()){                      //iterating through the string and incrementing the letter
            freq[c - 'a']++;
        }
        for(int i = 0; i < s.length(); i++) {               //then iterate through the array and find unique element
            if(freq[s.charAt(i) - 'a'] == 1) return i;
        }
        return -1;
    }
}
}
//Commited by Anuj Sen