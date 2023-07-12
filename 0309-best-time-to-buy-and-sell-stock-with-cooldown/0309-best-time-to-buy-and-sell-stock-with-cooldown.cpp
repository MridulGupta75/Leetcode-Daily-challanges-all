class Solution {
public:
    int func(int i,bool b,vector<int>&prices,int n,vector<vector<int>>&dp)
    {
        if(i>=n)return 0;
        int pro=0;
        if(dp[i][b]!=-1)return dp[i][b];
        if(!b)
        {
            pro=max(-prices[i]+func(i+1,true,prices,n,dp),func(i+1,false,prices,n,dp));
        }
        else
        {
            pro=max(prices[i]+func(i+2,false,prices,n,dp),func(i+1,true,prices,n,dp));
        }
        return dp[i][b]=pro;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector(2,-1));
        return func(0,0,prices,n,dp);
    }
};