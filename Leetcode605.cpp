class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {                                           //This Is An Easy Problem
        if (n == 0) {                                                                               //if n is 0 then return true beforehand
            return true;
        }
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)) {
                flowerbed[i] = 1;   //if the current element is 0 and the previous and next elements are 0 then set the current element to 1
                n--;                //also if its last or first elemnent with adjacent being 0 then decrement n
                if (n == 0) {                               //if n is 0 then return true
                    return true;                            
                }
            }
        }
        return false;                                       //else return false
    }
};
//Commited by Anuj Sen