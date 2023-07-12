class Solution {
public:
    int func(int i,bool b,vector<int>&prices,int n,vector<vector<int>>&dp,int fee)
    {
        if(i>=n)return 0;
        int pro=0;
        if(dp[i][b]!=-1)return dp[i][b];
        if(!b)
        {
            pro=max(-prices[i]-fee+func(i+1,true,prices,n,dp,fee),func(i+1,false,prices,n,dp,fee));
        }
        else
        {
            pro=max(prices[i]+func(i+1,false,prices,n,dp,fee),func(i+1,true,prices,n,dp,fee));
        }
        return dp[i][b]=pro;
    }
    int maxProfit(vector<int>& prices,int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector(2,-1));
        return func(0,0,prices,n,dp,fee);
        //  vector<vector<int>>dp(n+2,vector(2,0));
        // for(int i=n-1;i>=0;i--)
        // {
        //     dp[i][0]=max(-prices[i]+dp[i+1][1],dp[i+1][0]);
        //     dp[i][1]=max(prices[i]+dp[i+2][0],dp[i+1][1]);
        // }
        // return dp[0][0];
    }
};