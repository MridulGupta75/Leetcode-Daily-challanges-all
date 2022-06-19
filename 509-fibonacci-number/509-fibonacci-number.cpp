class Solution {
    int dp[31];
    
    public:
    Solution()
    {
        for(int i=0;i<31;i++)
            dp[i]=-1;
    }
    
    int fib(int n) {
          if(dp[n]==-1)
          {
              if(n==1||n==0)
                  dp[n]=n;
              else
                  dp[n]=fib(n-1)+fib(n-2);
          }
        return dp[n];
     }
};