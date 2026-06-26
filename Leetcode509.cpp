class Solution {
public:                                         //0 + 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21 + 34 . . . . . . . . . . . .
    int fib(int n) {                            //This is an easy problem on fibonacci where next term is sum of previous two terms.
        if(n == 0){                             //if n is 0 return 0, if n is 1 return 1, else return fib(n-1) + fib(n-2)
            return 0;
        }
        if(n == 1){
            return 1;
        }
        return fib(n-1) + fib(n-2);
    }
};
//Commited by Anuj Sen