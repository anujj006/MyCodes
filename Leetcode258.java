class Solution {
public:
    int addDigits(int num) {                        //This Is an easy leetcode problem
        int prev = 0;                               //This will store last digit 
        int sum;                                    //This Will store sum
        while(num >= 10){                           //loop to check if number is greater than 10
        sum = 0;                                    //sum gets zero after every start
        while(num > 0){                             //loop to check if number is greater than 0
            prev = num % 10;                        //This will store last digit
            num = num / 10;                         //This will remove last digit
            sum += prev;                            //This will add last digit
        }   
       num = sum;                                   //now sum will be stored in num and restart loop
        }
        return sum;
    }
};
//Commited by Anuj Sen