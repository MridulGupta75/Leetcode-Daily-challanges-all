class Solution {
public:
    int func(int i,int b,vector<int>& prices,int n,vector<vector<int>>&dp)
    {
        if(i==n||b==4)return 0;
        int pro=0;
        if(dp[i][b]!=-1)return dp[i][b];
        if(b==0||b==2)
        {
            pro=max(-prices[i]+func(i+1,b+1,prices,n,dp),func(i+1,b,prices,n,dp));
        }
        else
        {
            pro=max(prices[i]+func(i+1,b+1,prices,n,dp),func(i+1,b,prices,n,dp));
        }
        return dp[i][b]=pro;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // vector<vector<int>>dp(n,vector(4,-1));
        // return func(0,0,prices,n,dp);
         vector<vector<int>>dp(n+1,vector(5,0));
        for(int i=n-1;i>=0;i--)
        {
            for(int b=0;b<4;b++)
            {
             if(b==0||b==2)
            dp[i][b]=max(-prices[i]+dp[i+1][b+1],dp[i+1][b]);
                else
            dp[i][b]=max(prices[i]+dp[i+1][b+1],dp[i+1][b]);
            }
        
        }
        return dp[0][0];
        
    }
};
//0->buy
//1->sell
//2->buy
//3->sell
//4->return