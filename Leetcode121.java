class Solution {
    public int maxProfit(int[] prices) {
        int bb = prices[0]; //best buy
        int mp = 0;         //max profit
        //this loop iterates from index 1 and treates every traversal as a selling day and look forward to maximising the profit also by updating minimum between best
        //buy and current price refer notes for better understanding 
        for(int i = 1; i < prices.length; i++){
            if(prices[i] > bb){
                mp = Math.max(mp, prices[i] - bb);  //f(x) max to update mp 
            }
            bb = Math.min(bb, prices[i]);           //f(x) min to update bb
        }
        return mp;
    }
};
//Commited by Anuj Sen