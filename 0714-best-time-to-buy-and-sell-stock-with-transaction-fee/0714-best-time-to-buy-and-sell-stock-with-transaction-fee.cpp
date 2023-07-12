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
        // vector<vector<int>>dp(n,vector(2,-1));
        // return func(0,0,prices,n,dp,fee);
         // vector<vector<int>>dp(n+1,vector(2,0));
        vector<int>curr(2,0),pre(2,0);
        for(int i=n-1;i>=0;i--)
        {
            curr[0]=max(-prices[i]-fee+pre[1],pre[0]);
            curr[1]=max(prices[i]+pre[0],pre[1]);
            pre=curr;
        }
        return pre[0];
    }
};