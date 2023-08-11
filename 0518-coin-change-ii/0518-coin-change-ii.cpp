class Solution {
private:
    int coinChange(int amount,int index,vector<int>&coin,vector<vector<int>>&dp)
    {
        //base case
        if(index<0)return 0;
        if(amount==0)return 1;
        if(amount<0)return 0;
        //take & not take the coin
        //1)infinite supply
        int take=0,notTake=0;
        if(dp[index][amount]!=-1)return dp[index][amount];
        if(coin[index]<=amount)
        take=coinChange(amount-coin[index],index,coin,dp);
         notTake=coinChange(amount,index-1,coin,dp);
        return dp[index][amount]=take+notTake;
        
    }
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return coinChange(amount,coins.size()-1,coins,dp);
    }
};