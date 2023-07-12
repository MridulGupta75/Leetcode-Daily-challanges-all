class Solution {
public:
    int func(int i,bool b,int k,vector<int>& prices,int n,vector<vector<vector<int>>>&dp)
    {
        if(i==n||k==0)return 0;
        int pro=0;
        if(dp[i][b][k]!=-1)return dp[i][b][k];
        if(!b)//buy
        {
             pro=max(-prices[i]+func(i+1,true,k,prices,n,dp),func(i+1,b,k,prices,n,dp));
        }
        else//sell
        {
            pro=max(prices[i]+func(i+1,false,k-1,prices,n,dp),func(i+1,b,k,prices,n,dp));
        }
        return dp[i][b][k]=pro;
            
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector(2,vector(k+1,-1)));
        return func(0,0,k,prices,n,dp);
    }
};