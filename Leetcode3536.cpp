class Solution {
public:
    int maxProduct(int n) {                                 //This is an easy leetcode problem
        int prev = 0;                                       //prev will store last digit
        int pro = 0;                                        //pro will store product
        int mp = 0;                                         //mp will store max product
        vector<int> ans;                                    //ans will store array
        while(n > 0){                                       
            prev = n % 10;                                  //Loop to get last digit and store it in vector 'ans'
            ans.push_back(prev);
            n /= 10;
        }
        for(int i = 0; i < ans.size(); i++){                //loop to find max product
            for(int j = i + 1; j < ans.size(); j++){
                pro = ans[i] * ans[j];
                mp = max(mp, pro);
            }
        }
        return mp;
    }
};
//Commited by Anuj Sen