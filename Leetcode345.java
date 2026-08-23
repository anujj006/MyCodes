class Solution {
public:
    bool isVowel(char c) {                                       //easy leetcode problem
        return c == 'a' || c == 'e' || c == 'i' ||               //made a function which checks if charachter is vowel
               c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' ||
               c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {                              //then main function where logic is same as array reversal but with vowel conditions  
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            while (left < right && !isVowel(s[left])) {
                left++;
            }

            while (left < right && !isVowel(s[right])) {
                right--;
            }

            swap(s[left], s[right]);

            left++;
            right--;
        }

        return s;
    }
};
//Commited by Anuj Sen