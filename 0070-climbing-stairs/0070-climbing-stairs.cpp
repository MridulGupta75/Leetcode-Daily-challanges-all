class Solution {
public:
    
    int func(int n,vector<int>&dp)
    {
        if(n==0)return 1;
        if(dp[n-1]!=-1)return dp[n-1];
        int x=0,y=0;
         x=func(n-1,dp);
        if(n>=2)
        y=func(n-2,dp);
        dp[n-1]=x+y;
        return dp[n-1];
    }
    
    int climbStairs(int n) {
        vector<int>dp(n,-1);
        return func(n,dp);
        
    }
};