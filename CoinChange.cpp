/*
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.
*/

class Solution {
public:
    int dp[10009];
    int fun(int amt, vector<int> &coins){
        if (amt==0) {
            return 0;}
        if (dp[amt]!=-1){
            
            return dp[amt];
        }
        int ans=INT_MAX;
        for(int c:coins){
            if((amt-c)>=0)  ans=min(fun(amt-c,coins)+1LL,ans+0LL);           
        }
        return dp[amt]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans=fun(amount,coins);
        
        return ans==INT_MAX?-1:ans;
    }
};
