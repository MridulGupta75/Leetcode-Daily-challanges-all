class Solution {
public:
      int func(int i,int b,vector<int>& prices,int n,vector<vector<int>>&dp,int k)
    {
        if(i==n||b==2*k)return 0;
        int pro=0;
        if(dp[i][b]!=-1)return dp[i][b];
        if(b%2==0)
        {
            pro=max(-prices[i]+func(i+1,b+1,prices,n,dp,k),func(i+1,b,prices,n,dp,k));
        }
        else
        {
            pro=max(prices[i]+func(i+1,b+1,prices,n,dp, k),func(i+1,b,prices,n,dp, k));
        }
        return dp[i][b]=pro;
    }
    int maxProfit(int k, vector<int>& prices) {
         int n=prices.size();
        vector<vector<int>>dp(n,vector(k*2,-1));
        return func(0,0,prices,n,dp,k);
    }
};