class Solution {
public:
   int func(int i, vector<int>&dp)
   {
       if(i<0)return 0;
       if(i==0)return 1;
       if(dp[i]!=-1)return dp[i];
       int sol=func(i-1,dp)+func(i-2,dp);
       return dp[i]=sol;
       
   }
    int climbStairs(int n) {
        // vector<int>dp(n+1,0);
        // return func(n,dp);
        int pre=1,curr=1;
        for(int i=2;i<=n;i++)
        {
            int sol=curr+pre;
             pre=curr;
             curr=sol;
              
        }
        return curr;
        
    }
};